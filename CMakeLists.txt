project(lesson8)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
        src/lesson8/main.cpp
        src/lesson8/header_lesson8.h)

add_executable(learn ${sources})