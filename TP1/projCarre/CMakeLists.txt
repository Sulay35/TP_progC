cmake_minimum_required(VERSION 3.26)
project(projCarre C)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic-errors")

add_executable(projCarre main.c)
target_link_libraries(projCarre m)
