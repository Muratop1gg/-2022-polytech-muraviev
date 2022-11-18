cmake_minimum_required(VERSION 3.1...3.24)
project(hello_world)

set(SOURCE_FILES hello_world.cpp func.cpp)

add_executable(hello_world_cmake.out ${SOURCE_FILES})