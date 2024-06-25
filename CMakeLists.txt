cmake_minimum_required(VERSION 3.27)

project(Aristotle)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(app ${SRC})