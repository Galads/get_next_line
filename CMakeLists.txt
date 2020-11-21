cmake_minimum_required(VERSION 3.17)
project(gnl C)

set(CMAKE_C_STANDARD 99)

add_executable(gnl main.c gnl get_next_line.c gnl get_next_line.h gnl get_next_line_utils.c cmake-build-debug/file1.txt)
file(READ cmake-build-debug/file1.txt file1)