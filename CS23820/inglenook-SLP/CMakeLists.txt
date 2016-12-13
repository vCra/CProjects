cmake_minimum_required(VERSION 3.6)
project(inglenook_SLP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp vehicle.cpp vehicle.h wagon.cpp wagon.h sidings.cpp sidings.h)
add_executable(inglenook_SLP ${SOURCE_FILES})