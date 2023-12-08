cmake_minimum_required(VERSION 3.27)
project(projC__)

set(CMAKE_CXX_STANDARD 23)

add_executable(projC__ main.cpp
        ../pgk/DataBase.cpp
        ../pgk/DataBase.h
        ../pgk/Date.cpp
        ../pgk/Date.h)
