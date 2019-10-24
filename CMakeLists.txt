cmake_minimum_required(VERSION 3.15)
project(0x4d_engine)

set(CMAKE_CXX_STANDARD 14)

include_directories(Game)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED graphics network audio window system)

add_executable(0x4d_engine
        Game/Game.cpp
        Game/Game.hpp
        main.cpp)

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-network sfml-audio sfml-window sfml-system)

