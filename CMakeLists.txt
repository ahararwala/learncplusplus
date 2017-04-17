project(lesson4)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
        src/lesson4/main.cpp
        src/lesson4/header_lesson4.h)

add_executable(learn ${sources})

