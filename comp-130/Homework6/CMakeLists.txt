cmake_minimum_required(VERSION 3.19)
project(Homework6)

set(CMAKE_CXX_STANDARD 14)

include_directories(Reverse)
include_directories(Sort)

add_executable(Homework6
        #Reverse/Reverse_H.cpp
        #Reverse/Reverse_H.h
        #Reverse/ReverseDriver.cpp
        #Sort/Sort_H.cpp
        #Sort/Sort_H.h
        #Sort/SortDriver.cpp
        #ReverseInteger.cpp
        SortNumbers.cpp)
