cmake_minimum_required(VERSION 3.6)
project(hello_world)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.cpp)
add_executable(hello_world ${SOURCE_FILES})