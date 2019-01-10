# 3.9 adds support for "GoogleTest" which enumerates the tests inside
# of the code and adds them to ctest.
cmake_minimum_required(VERSION 3.9)

project(cmake_sample)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)