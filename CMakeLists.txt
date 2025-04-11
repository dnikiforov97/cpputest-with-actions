cmake_minimum_required(VERSION 3.21.2)

project(simple_test)

include(CTest)

# Find the dependency
list(APPEND CMAKE_PREFIX_PATH "/project/tools/cpputest")
find_package(CppUTest REQUIRED)

# Include the tests directory
add_subdirectory(tests)
add_subdirectory(src)