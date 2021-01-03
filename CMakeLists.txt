cmake_minimum_required(VERSION 3.0)

project(STUDENTINFORMATION)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(CMAKE_BUILD_TYPE Debug)

add_definitions(-std=c++11)

add_executable(testDemo main.cpp src/studentachievement.cpp src/studentinformation.cpp)