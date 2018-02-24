cmake_minimum_required(VERSION 2.8.3)
project(cmake1)

message("Adding executable")

add_executable(prog1 prog1.cpp)

message("Processing CMakeLists.txt")
message("using cmake version ${CMAKE_VERSION}")
