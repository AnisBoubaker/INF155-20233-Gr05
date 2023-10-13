cmake_minimum_required(VERSION 3.26)
project(Modules C)

set(CMAKE_C_STANDARD 11)

add_executable(Modules main.c
        module_tableaux.c
        module_tableaux.h
        Toto/tata.c
        Toto/tata.h)
