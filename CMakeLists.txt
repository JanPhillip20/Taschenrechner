cmake_minimum_required(VERSION 3.20)
project(Taschenrechner)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Taschenrechner
        main.cpp
        main.h)
