cmake_minimum_required(VERSION 3.6)
project(longScrabble)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp dataBase.cpp dataBase.h)
add_executable(longScrabble ${SOURCE_FILES})