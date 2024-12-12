
project(utest)
cmake_minimum_required(VERSION 3.15)


set(SOURCES
  utest.h
  unittest_main.cpp
  test1.cpp
  mytest1.cpp
)

add_executable(utest_test ${SOURCES})


