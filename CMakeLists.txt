cmake_minimum_required(VERSION 3.8)
project(LinuxCStudy)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c chapter3function/list.c chapter3function/list.h)
add_executable(LinuxCStudy ${SOURCE_FILES})