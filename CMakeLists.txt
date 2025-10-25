cmake_minimum_required(VERSION 3.31)
project(Calculadora
    LANGUAGES C
    VERSION 1.0
)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(calculadora ${SOURCES})