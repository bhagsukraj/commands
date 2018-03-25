cmake_minimum_required(VERSION 2.8.3)
project(cmake3)

add_subdirectory(boo)
add_subdirectory(foo)
add_executable(hello hello.cpp)

include(ProcessorCount)
ProcessorCount(N)
message("Number of processors: ${N}")

enable_testing()
add_test(NAME hello COMMAND hello)
