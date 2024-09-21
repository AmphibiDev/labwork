set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Zi")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Zi")
cmake_minimum_required(VERSION 3.8)

project("labwork")

add_executable(labwork1_01 "lab1_01.cpp")
add_executable(labwork1_02 "lab1_02.cpp")

add_executable(labwork2_01 "lab2_01.cpp")
add_executable(labwork2_02 "lab2_02.cpp")
add_executable(labwork2_03 "lab2_03.cpp")