cmake_minimum_required(VERSION 2.8.4)
project(sfgl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lGL -lsfml-system -lsfml-graphics -lsfml-window" )
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp App.cpp GameApp.cpp)
add_executable(sfgl ${SOURCE_FILES})