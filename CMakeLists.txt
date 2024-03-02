cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(project LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS' OFF)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable( myapplication Planet.cpp  Quassar.cpp  SpaceObject.cpp  Star.cpp StarQuass.cpp main.cpp)

