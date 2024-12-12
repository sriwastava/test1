
project(test1)

cmake_minimum_required(VERSION 3.15)

# Define the static library target for fibonacci.cpp
add_library(fibonaccilib STATIC fibonacci.cpp)

# Define the sources for the test executable
set(TEST_SOURCES
  tests/utest.h
  tests/unittest_main.cpp
  tests/test1.cpp
  tests/mytest1.cpp
)

# Add the main executable target
add_executable(test1 main.cpp)

# Link the fibonacci library to the main executable
target_link_libraries(test1 PRIVATE fibonaccilib)

# Add the unit test executable target
add_executable(utest_test ${TEST_SOURCES})

# Link the fibonacci library to the unit test executable
target_link_libraries(utest_test PRIVATE fibonaccilib)