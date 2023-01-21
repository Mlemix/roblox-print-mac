cmake_minimum_required(VERSION 3.5)
project(roblox-print-mac CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(entry src/main.cpp)
set(CMAKE_REQUIRED_LINK_OPTIONS "x86_x64")
set(CMAKE_OSX_ARCHITECTURES "x86_64")

message(STATUS "use c++20")

add_library(${PROJECT_NAME} SHARED ${entry})

set_property(TARGET ${PROJECT_NAME} PROPERTY OUTPUT_NAME "roblox-print-mac")
set_property(TARGET ${PROJECT_NAME} PROPERTY PREFIX "")