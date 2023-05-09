cmake_minimum_required(VERSION 3.25)
project(cowboy_vs_ninja_a)

set(CMAKE_CXX_STANDARD 17)

add_executable(Demo.cpp sources/Point.cpp sources/Point.h Demo.cpp)
