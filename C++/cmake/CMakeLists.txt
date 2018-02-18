cmake_minimum_required(VERSION 2.8.3)
message("source : ${PROJECT_SOURCE_DIR}")
#project
#################
#project
#################
project(cmake)

#messages after project
message("source : ${PROJECT_SOURCE_DIR}")
message("binary : ${PROJECT_BINARY_DIR}")
message("version: ${PROJECT_VERSION}")
message("version: ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}")
#project_source dir
message("source(foo): ${cmake_SOURCE_DIR}")

#add executable file
add_executable(firstcmake firstcmake.cpp)
message("Ravi Kiran first CMake project")

##########################
#vvariables
##########################
message("The value of abc is : ${abc}")
message("The value of xyz is : ${xyz}")

set(abc "quoted argument")
set(xyz "345")

message("The value of abc is : '${abc}'")
message("The value of xyz is : ${xyz}")

#############################
#regualar vs cache variables
#############################
set(abc "123")
set(xyz "321" CACHE STRING "")

message("Regular variable abc ${abc}")
message("Cache variable xyz ${xyz}")

unset(xyz)
unset(abc)
message("regular variable abc ${abc}")
message("Cache variable xyz ${xyz}")

####################################
#Scope of variable
####################################
add_subdirectory(sub)

###################################
#function
###################################
set(abc "This is demo for function")
function(print_name varname)
  message("Variable name : '${varname}' = ${${varname}}")
endfunction()

print_name(abc)

############################
#foreach
############################
set(c "x;a;b;c")
foreach(x ${c})
  message(" ${x}")
endforeach()
