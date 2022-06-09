cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0)

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )
add_executable(helloworld src/main.c)