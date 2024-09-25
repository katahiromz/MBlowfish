# CMakeLists.txt --- CMake project settings
##############################################################################

# CMake minimum version
cmake_minimum_required(VERSION 3.6)

# project name and languages
project(MBlowfish CXX)

# libMBlowfish.a
add_library(MBlowfish STATIC MBlowfish.cpp)
