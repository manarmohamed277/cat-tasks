cmake_minimum_required(VERSION 3.28)
project(global C)

set(CMAKE_C_STANDARD 99)

add_executable(global main.c
        stack.c
        stack.h
        queue.c
        queue.h
        global.h)
