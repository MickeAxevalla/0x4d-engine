cmake_minimum_required(VERSION 3.15)
project(0x4d_engine)

set(CMAKE_CXX_STANDARD 14)

include_directories(Game)

add_executable(0x4d_engine
        Game/Game.cpp
        Game/Game.hpp
        main.cpp)
