# Get a list of all subdirectories in the tests directory
file(GLOB test_dirs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *)

# Loop over each subdirectory
foreach(test_dir ${test_dirs})
    # Check if it's a directory
    if(IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${test_dir})
        # Create an executable for this test suite
        add_executable(${test_dir} ${test_dir}/main.cpp ${test_dir}/test.cpp)
        
        # Link against CppUTest
        target_link_libraries(${test_dir} PRIVATE source_lib CppUTest)
        
        # Add the executable as a test for CTest
        add_test(NAME ${test_dir} COMMAND ${test_dir})
    endif()
endforeach()