cmake_minimum_required(VERSION 3.28)
project(linkedQ C)

set(CMAKE_C_STANDARD 99)

add_executable(linkedQ main.c
        linkedQ.c
        linkedQ.h)
