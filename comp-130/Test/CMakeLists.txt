cmake_minimum_required(VERSION 3.19)
project(Test)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test main.cpp Account.cpp Account.h tt/test.cpp)