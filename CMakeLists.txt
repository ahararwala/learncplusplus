project(lesson7)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
        src/lesson7/main.cpp
        src/lesson7/learn_functions.cpp src/lesson7/header_lesson7.h src/lesson7/learn_arrays.cpp src/lesson7/learn_correcting_compile_issues.cpp src/lesson7/header_correcting_issues.h)

add_executable(learn ${sources})