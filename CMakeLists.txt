cmake_minimum_required(VERSION 3.16.3)

project(test-task)

set(SOURCE_EXE main.cpp)

include_directories(lib)

add_executable(main ${SOURCE_EXE})

add_subdirectory(lib)

target_link_libraries(main calc)

