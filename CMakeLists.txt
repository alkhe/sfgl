cmake_minimum_required(VERSION 2.8.4)
project(sfgl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -lGL -lsfml-system -lsfml-graphics -lsfml-window")

set(SOURCE_FILES main.cpp App.cpp Implementation.cpp)
add_executable(sfgl ${SOURCE_FILES})