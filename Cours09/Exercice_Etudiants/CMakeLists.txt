cmake_minimum_required(VERSION 3.26)
project(Exercice_Etudiants C)

set(CMAKE_C_STANDARD 11)

add_executable(Exercice_Etudiants main.c
        t_etudiant.c
        t_etudiant.h)
