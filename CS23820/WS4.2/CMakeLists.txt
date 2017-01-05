cmake_minimum_required(VERSION 3.6)
project(CS238WS4_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(CS238WS4_2 ${SOURCE_FILES})