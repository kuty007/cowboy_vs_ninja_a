cmake_minimum_required(VERSION 3.25)
project(cowboy_vs_ninja_a)

set(CMAKE_CXX_STANDARD 17)

add_executable(Demo.cpp sources/Point.cpp sources/Point.hpp Demo.cpp sources/Character.cpp sources/Character.hpp sources/Cowboy.cpp sources/Cowboy.hpp sources/Ninja.cpp sources/Ninja.hpp sources/OldNinja.cpp sources/OldNinja.hpp sources/YoungNinja.cpp sources/YoungNinja.hpp sources/TrainedNinja.cpp sources/TrainedNinja.hpp sources/Team.cpp sources/Team.hpp Test.cpp sources/Team_b.cpp sources/Team_b.hpp sources/SmartTeam.cpp sources/SmartTeam.h)
