cmake_minimum_required(VERSION 3.22)
project(heapHijosclone C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(heapHijosclone
        helper.c
        helper.h
        main.c)
