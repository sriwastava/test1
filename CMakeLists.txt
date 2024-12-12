
project(test1)
cmake_minimum_required(VERSION 3.15)

add_executable(test1 main.cpp fibonacci.cpp)
add_executable(unittest tests/utest.h tests/unittest_main.cpp tests/test1.cpp)
