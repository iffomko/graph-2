cmake_minimum_required(VERSION 3.21)
project(graph_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(graph_2 main.cpp cpp/readMatrix/readMatrix.cpp cpp/readMatrix/readMatrix.h cpp/findIsolatedTops/findIsolatedTops.cpp cpp/findIsolatedTops/findIsolatedTops.h)
