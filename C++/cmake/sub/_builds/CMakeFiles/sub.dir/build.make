# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ravi/git/commands/C++/cmake/sub

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ravi/git/commands/C++/cmake/sub/_builds

# Include any dependencies generated for this target.
include CMakeFiles/sub.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sub.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sub.dir/flags.make

CMakeFiles/sub.dir/sub.cpp.o: CMakeFiles/sub.dir/flags.make
CMakeFiles/sub.dir/sub.cpp.o: ../sub.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ravi/git/commands/C++/cmake/sub/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sub.dir/sub.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sub.dir/sub.cpp.o -c /home/ravi/git/commands/C++/cmake/sub/sub.cpp

CMakeFiles/sub.dir/sub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sub.dir/sub.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ravi/git/commands/C++/cmake/sub/sub.cpp > CMakeFiles/sub.dir/sub.cpp.i

CMakeFiles/sub.dir/sub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sub.dir/sub.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ravi/git/commands/C++/cmake/sub/sub.cpp -o CMakeFiles/sub.dir/sub.cpp.s

CMakeFiles/sub.dir/sub.cpp.o.requires:

.PHONY : CMakeFiles/sub.dir/sub.cpp.o.requires

CMakeFiles/sub.dir/sub.cpp.o.provides: CMakeFiles/sub.dir/sub.cpp.o.requires
	$(MAKE) -f CMakeFiles/sub.dir/build.make CMakeFiles/sub.dir/sub.cpp.o.provides.build
.PHONY : CMakeFiles/sub.dir/sub.cpp.o.provides

CMakeFiles/sub.dir/sub.cpp.o.provides.build: CMakeFiles/sub.dir/sub.cpp.o


# Object files for target sub
sub_OBJECTS = \
"CMakeFiles/sub.dir/sub.cpp.o"

# External object files for target sub
sub_EXTERNAL_OBJECTS =

sub: CMakeFiles/sub.dir/sub.cpp.o
sub: CMakeFiles/sub.dir/build.make
sub: CMakeFiles/sub.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ravi/git/commands/C++/cmake/sub/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sub"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sub.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sub.dir/build: sub

.PHONY : CMakeFiles/sub.dir/build

CMakeFiles/sub.dir/requires: CMakeFiles/sub.dir/sub.cpp.o.requires

.PHONY : CMakeFiles/sub.dir/requires

CMakeFiles/sub.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sub.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sub.dir/clean

CMakeFiles/sub.dir/depend:
	cd /home/ravi/git/commands/C++/cmake/sub/_builds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ravi/git/commands/C++/cmake/sub /home/ravi/git/commands/C++/cmake/sub /home/ravi/git/commands/C++/cmake/sub/_builds /home/ravi/git/commands/C++/cmake/sub/_builds /home/ravi/git/commands/C++/cmake/sub/_builds/CMakeFiles/sub.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sub.dir/depend

