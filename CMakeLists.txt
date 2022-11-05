cmake_minimum_required(VERSION 3.23)
project(TP3 C)

set(CMAKE_C_STANDARD 99)

add_executable(TP3_exo1 "TP3_exo1main.c")
add_executable(TP3_exo2 "TP3_exo2main.c")
add_executable(TP3_exo3 "TP3_exo3main.c")
add_executable(TP3_exo4 "TP3_exo4main.c")
add_executable(TP3_exo5 "TP3_exo5main.c")
add_executable(TP3_exo6 malibrairie.c malibrairie.h "TP3_exo6main.c")