cmake_minimum_required(VERSION 3.5)
enable_testing()
find_package(GTest REQUIRED)

include_directories (${TEST_SOURCE_DIR}/src
                     ${GTEST_INCLUDE_DIRS}
                     )

add_executable (Test sqr_test.cpp)
target_link_libraries(Test ${GTEST_BOTH_LIBRARIES})