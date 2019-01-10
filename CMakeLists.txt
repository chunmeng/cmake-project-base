cmake_minimum_required(VERSION 3.5)

project(cmake_sample)

add_subdirectory(src)
add_subdirectory(test)

enable_testing ()
add_test(NAME MyTest COMMAND Test)