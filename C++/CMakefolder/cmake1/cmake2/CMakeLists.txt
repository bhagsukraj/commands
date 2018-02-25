cmake_minimum_required(VERSION 3.0)
project(cmake2)

add_executable(prog2 prog2.cpp)

message("Ths is a subdirectory")

set(abc "1983")
message("Regular variable : ${abc}")
