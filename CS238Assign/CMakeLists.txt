cmake_minimum_required(VERSION 3.6)
project(CS238Assign)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp vehicle.h vehicle.cpp)
add_executable(CS238Assign ${SOURCE_FILES})