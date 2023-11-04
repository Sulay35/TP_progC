cmake_minimum_required(VERSION 3.26)
project(TP4 C)

set(CMAKE_C_STANDARD 90)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic-errors")

add_executable(TP4 main.c
        tache.c
        listechainee.c
        listechainee.h)
