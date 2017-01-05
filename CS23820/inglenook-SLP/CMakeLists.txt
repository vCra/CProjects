cmake_minimum_required(VERSION 3.6)
project(inglenook_SLP)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost REQUIRED COMPONENTS filesystem system)
set (Boost_USE_STATIC_LIBS OFF) # enable dynamic linking
set(SOURCE_FILES main.cpp vehicle.cpp vehicle.h wagon.cpp wagon.h siding.cpp siding.h station.cpp station.h)

add_executable(inglenook_SLP ${SOURCE_FILES})

if (Boost_FOUND)
    include_directories(inglenook_SLP ${Boost_INCLUDE_DIRS})
    target_link_libraries(inglenook_SLP ${Boost_LIBRARIES})
endif()



