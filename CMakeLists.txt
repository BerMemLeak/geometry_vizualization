cmake_minimum_required(VERSION 3.27)
project(geometry VERSION 0.1 LANGUAGES CXX)
include_directories(geometry_lib)
set(CMAKE_CXX_STANDARD 20)

add_executable(geometry main.cpp)
add_subdirectory(geometry_lib)
target_link_libraries(geometry geometry_lib)