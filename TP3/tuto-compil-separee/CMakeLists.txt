cmake_minimum_required(VERSION 3.17)
project(tuto_debogueur C)

set(CMAKE_C_STANDARD 90)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic-errors")

add_executable(tuto-compil-separee main.c
        mesFonctionsMaths.c
        mesFonctionsMaths.h)
target_link_libraries(tuto-compil-separee m)