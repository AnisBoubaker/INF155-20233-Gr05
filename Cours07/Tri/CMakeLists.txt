cmake_minimum_required(VERSION 3.26)
project(Tri C)

set(CMAKE_C_STANDARD 11)

add_executable(Tri main.c
        tri.c
        tri.h)
