cmake_minimum_required(VERSION 3.23)
project(Study)

set(CMAKE_CXX_STANDARD 14)

include_directories(Basics/step02_Constructor)

add_executable(Study
        Basics/step02_Constructor/Person.cpp
        Basics/step02_Constructor/Person.h
        Basics/step02_Constructor/PrsnMain.cpp)
