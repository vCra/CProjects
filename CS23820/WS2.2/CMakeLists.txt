cmake_minimum_required(VERSION 3.6)
project(CS238WS2_4)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp multiply.c biggest.c)
add_executable(CS238WS2_4 ${SOURCE_FILES})