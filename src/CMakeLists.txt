# Define the average library with its source file
add_library(source_lib sum/sum.c)

# Set the include directory to src/ (e.g., project/src/)
# PUBLIC means any target linking to average_lib inherits this include path
target_include_directories(source_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})