cmake_minimum_required(VERSION 3.8)

set(This repository)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(lib)

set(Headers
    repository.hpp
)
set(Sources
    repository.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)