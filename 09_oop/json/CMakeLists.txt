cmake_minimum_required(VERSION 3.12 FATAL_ERROR)
project(json LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include(doctest.cmake)
add_executable(tests test_json.cpp)
target_link_libraries(tests PRIVATE doctest)