cmake_minimum_required(VERSION 3.22)
project(To_Do_List)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(To_Do_List
        main.cpp
        TodoList.cpp
        TodoList.h
        TodoListInterface.h)
