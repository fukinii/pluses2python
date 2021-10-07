cmake_minimum_required(VERSION 3.17)
project(pluses2python)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/Add.cpp src/Add.h)
add_executable(pluses2python ${SOURCE_FILES})