cmake_minimum_required(VERSION 3.6)
project(Challenge1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(Challenge1 ${SOURCE_FILES} ColorPuzzle.cpp ColorPuzzle.h)