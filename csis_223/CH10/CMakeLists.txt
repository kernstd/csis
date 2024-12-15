cmake_minimum_required(VERSION 3.29)
project(EX4)

set(CMAKE_CXX_STANDARD 14)

include_directories(EX4)

add_executable(CH10
    EX4/counterType.cpp
    EX4/counterType.h
    EX4/EX4.cpp)
