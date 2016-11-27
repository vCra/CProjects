cmake_minimum_required(VERSION 3.6)
project(SBP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp main.c)
add_executable(SBP ${SOURCE_FILES})