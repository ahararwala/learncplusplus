project(lesson9)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
        src/lesson9/main.cpp
        src/lesson9/header_lesson9.h
        src/lesson9/Compare.cpp
        src/lesson9/Compare.h)

add_executable(learn ${sources})