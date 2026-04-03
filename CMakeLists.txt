cmake_minimum_required(VERSION 3.28)

project(darts)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(darts main.cpp game.cpp menu.cpp game.h menu.h)

