cmake_minimum_required(VERSION 3.23)
project(Study)

set(CMAKE_CXX_STANDARD 14)

include_directories(Basics/step01_Class_And_Object)

add_executable(Study
        Basics/step01_Class_And_Object/CntMain.cpp
        Basics/step01_Class_And_Object/Counter.cpp
        Basics/step01_Class_And_Object/Counter.h)
