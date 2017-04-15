project(learn)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
    src/main.cpp
    src/learn_constants.cpp src/learn_enums.cpp src/learn_formatting.cpp)

add_executable(learn ${sources})

