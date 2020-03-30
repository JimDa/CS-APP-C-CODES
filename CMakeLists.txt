# cmake_minimum_required(VERSION <specify CMake version here>)
project(ccodes C)

set(CMAKE_C_STANDARD 99)

add_executable(ccodes main.c helloworld.c statictest.c hellostr.c)