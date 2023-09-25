cmake_minimum_required(VERSION 3.17)
project(main-rand C)

set(CMAKE_C_STANDARD 90)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic-errors")


add_executable(main-rand main.c
                tableau.c
                tableau.h
                chaines.c
                chaines.h
                )