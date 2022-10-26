cmake_minimum_required(VERSION 3.23)
project(Study)

set(CMAKE_CXX_STANDARD 14)

include_directories(Homework)

add_executable(Study
        Homework/CppBeginner/CppBeginner.cpp)
