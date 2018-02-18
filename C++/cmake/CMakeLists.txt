cmake_minimum_required(VERSION 2.8.3)
message("source : ${PROJECT_SOURCE_DIR}")
project(cmake)
message("source : ${PROJECT_SOURCE_DIR}")
message("binary : ${PROJECT_BINARY_DIR}")
message("version: ${PROJECT_VERSION}")
message("version: ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}")
message("source(foo): ${cmake_SOURCE_DIR}")


add_executable(firstcmake firstcmake.cpp)
message("Ravi Kiran first CMake project")
