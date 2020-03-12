# version request
cmake_minimum_required(VERSION 3.10)
# project
project(CMakeDemo C++)
# c++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# specific executable
add_executable(CMakeDemo main.cpp)