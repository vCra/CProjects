cmake_minimum_required(VERSION 3.6)
project(WS6_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Pension.cpp Employee.cpp Date.cpp)
add_executable(WS6_3 ${SOURCE_FILES})