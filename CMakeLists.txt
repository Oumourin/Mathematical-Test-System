cmake_minimum_required(VERSION 3.14)
project(Mathematical_Test_System)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(Mathematical_Test_System main.cpp Topic.h Student.cpp Student.h Topic.cpp UI.cpp UI.h)