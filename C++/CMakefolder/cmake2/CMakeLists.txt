cmake_minimum_required(VERSION 2.8.3)
project(cmake2)

option(foo_a "Option A" OFF)
option(foo_b "Option A" ON)

message("foo_a : ${foo_a}")
message("foo_b : ${foo_b}")

set(A "ABC")
set(A "xyz" CACHE STRING "")
unset(A CACHE)
message("The value of A is ${A}")
