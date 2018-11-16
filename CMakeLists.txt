cmake_minimum_required(VERSION 3.7 FATAL_ERROR)

project(gtest-example)

add_subdirectory(googletest)

add_executable(gtest-example test.cpp)
target_link_libraries(gtest-example PRIVATE gtest)
