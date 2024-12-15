cmake_minimum_required(VERSION 3.29)
project(extraCred)

set(CMAKE_CXX_STANDARD 14)

include_directories(CH10/extraCred)

add_executable(csis_223
    CH10/extraCred/Circle.cpp
    CH10/extraCred/Circle.h
    CH10/extraCred/CircleClass.cpp)
