cmake_minimum_required(VERSION 3.6)
project(facultate)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES "sem 2.cpp" exercitiu_studenti.cpp)
add_executable(facultate ${SOURCE_FILES} "ecuatia de gradul 2.cpp")