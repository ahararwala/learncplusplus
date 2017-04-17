project(lesson2)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++0x)

set(sources
        src/lesson2/main.cpp
        src/lesson2/header_lesson2.h src/lesson2/learn_arithmetic_operators.cpp src/lesson2/learn_variable_assignments.cpp src/lesson2/learn_prefix_postfix.cpp src/lesson2/learn_variable_assignment_short.cpp)

add_executable(learn ${sources})

