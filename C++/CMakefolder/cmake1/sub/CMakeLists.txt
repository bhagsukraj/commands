cmake_minimum_required(VERSION 2.8.3)
project(sub)

set(abc "Hello abc")

message("This is sub directory value of abc is ${abc}")
message("This is the second line of sub directory ${abc}")

add_executable(sub sub.cpp)
