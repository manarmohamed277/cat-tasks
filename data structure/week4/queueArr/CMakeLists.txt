cmake_minimum_required(VERSION 3.28)
project(Q C)

set(CMAKE_C_STANDARD 99)

add_executable(Q main.c
        queue.h
        queue.c)
