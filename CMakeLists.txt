# 3.9 adds support for "GoogleTest" which enumerates the tests inside
# of the code and adds them to ctest.
# Default cmake is 3.5.1 on ubuntu 16.04
cmake_minimum_required(VERSION 3.5)

project(cmake_sample)

set(CMAKE_CXX_STANDARD 11)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)