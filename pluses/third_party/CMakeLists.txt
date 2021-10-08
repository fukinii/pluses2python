cmake_minimum_required(VERSION 3.17)
project(ThirdParty)

set(CMAKE_CXX_STANDARD 17)

if (BUILD_PYTHON)
    add_subdirectory(pybind11)
endif ()
add_library(eigen INTERFACE)
target_include_directories(eigen INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})