project(lesson5)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
        src/lesson5/main.cpp
        src/lesson5/header_lesson5.h src/lesson5/learn_pointers.cpp)

add_executable(learn ${sources})

