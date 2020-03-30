# cmake_minimum_required(VERSION <specify CMake version here>)
project(ccodes C)

set(CMAKE_C_STANDARD 99)

add_executable(ccodes main.c helloworld.c hellostr.c section-2/show_bytes.c section-2/show_bytes.h main.c section-2/practice.c)