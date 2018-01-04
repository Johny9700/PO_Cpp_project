cmake_minimum_required(VERSION 3.8)
project(PO_project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp classes.cpp classes.h terminal.cpp terminal.h)
add_executable(PO_project ${SOURCE_FILES})