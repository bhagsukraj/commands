cmake_minimum_required(VERSION 2.8.3)
project(cmake2)

add_executable(hello hello.cpp)

set(abc "xyz")
set(abc "abc" CACHE STRING "")
set(abc "pqr" CACHE STRING "")

message("abc value is ${abc}")
unset(abc)
message("abc value is ${abc}")

message("Value of a is ${A}")
message("Value of b is ${B}")
message("Value of c is ${C}")

set(A "Hello India" CACHE STRING "" FORCE)


message("Environment variable USERNAME: $ENV{USERNAME}")
