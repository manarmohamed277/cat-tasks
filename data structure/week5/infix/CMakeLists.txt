cmake_minimum_required(VERSION 3.28)
project(infix C)

set(CMAKE_C_STANDARD 99)

add_executable(infix main.c
        stack.c
        stack.h)
