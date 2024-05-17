cmake_minimum_required(VERSION 3.23)
project(chapter_3)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(framework)
add_executable(chapter_3 meta_programming.cpp)
