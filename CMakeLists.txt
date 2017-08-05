cmake_minimum_required(VERSION 3.6)
project(gameoflife)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp grid.cpp grid.h)
add_executable(gameoflife ${SOURCE_FILES})