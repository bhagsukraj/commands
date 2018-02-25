cmake_minimum_required(VERSION 3.0)
project(cmake1)

message("Adding executable")

add_executable(prog1 prog1.cpp)

message("Processing CMakeLists.txt")
message("using cmake version ${CMAKE_VERSION}")
message("C compiler ${CMAKE_C_COMPILER}")
message("Source: ${PROJECT_SOURCE_DIR}")
message("Target: ${PROJECT_BINARY_DIR}")

add_subdirectory(cmake2)
