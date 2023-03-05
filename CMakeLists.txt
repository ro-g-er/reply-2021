cmake_minimum_required(VERSION 3.24)
project(reply_2021)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(reply_2021
        src/Building.cpp
        src/Building.h
        src/main.cpp src/Antenna.h src/Antenna.cpp src/Network.h src/Network.cpp)
