cmake_minimum_required(VERSION 3.16.3)

project(test-task)

set(SOURCE_LIB calc.c)

add_library(calc STATIC ${SOURCE_LIB})
