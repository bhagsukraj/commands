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
CMAKE_SOURCE_DIR = /home/ravi/git/commands/C++/CMakefolder/cmake3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds

# Include any dependencies generated for this target.
include foo/CMakeFiles/foo.dir/depend.make

# Include the progress variables for this target.
include foo/CMakeFiles/foo.dir/progress.make

# Include the compile flags for this target's objects.
include foo/CMakeFiles/foo.dir/flags.make

foo/CMakeFiles/foo.dir/foo.cpp.o: foo/CMakeFiles/foo.dir/flags.make
foo/CMakeFiles/foo.dir/foo.cpp.o: ../foo/foo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object foo/CMakeFiles/foo.dir/foo.cpp.o"
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/foo.dir/foo.cpp.o -c /home/ravi/git/commands/C++/CMakefolder/cmake3/foo/foo.cpp

foo/CMakeFiles/foo.dir/foo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/foo.dir/foo.cpp.i"
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ravi/git/commands/C++/CMakefolder/cmake3/foo/foo.cpp > CMakeFiles/foo.dir/foo.cpp.i

foo/CMakeFiles/foo.dir/foo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/foo.dir/foo.cpp.s"
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ravi/git/commands/C++/CMakefolder/cmake3/foo/foo.cpp -o CMakeFiles/foo.dir/foo.cpp.s

foo/CMakeFiles/foo.dir/foo.cpp.o.requires:

.PHONY : foo/CMakeFiles/foo.dir/foo.cpp.o.requires

foo/CMakeFiles/foo.dir/foo.cpp.o.provides: foo/CMakeFiles/foo.dir/foo.cpp.o.requires
	$(MAKE) -f foo/CMakeFiles/foo.dir/build.make foo/CMakeFiles/foo.dir/foo.cpp.o.provides.build
.PHONY : foo/CMakeFiles/foo.dir/foo.cpp.o.provides

foo/CMakeFiles/foo.dir/foo.cpp.o.provides.build: foo/CMakeFiles/foo.dir/foo.cpp.o


# Object files for target foo
foo_OBJECTS = \
"CMakeFiles/foo.dir/foo.cpp.o"

# External object files for target foo
foo_EXTERNAL_OBJECTS =

foo/foo: foo/CMakeFiles/foo.dir/foo.cpp.o
foo/foo: foo/CMakeFiles/foo.dir/build.make
foo/foo: foo/CMakeFiles/foo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable foo"
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/foo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
foo/CMakeFiles/foo.dir/build: foo/foo

.PHONY : foo/CMakeFiles/foo.dir/build

foo/CMakeFiles/foo.dir/requires: foo/CMakeFiles/foo.dir/foo.cpp.o.requires

.PHONY : foo/CMakeFiles/foo.dir/requires

foo/CMakeFiles/foo.dir/clean:
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo && $(CMAKE_COMMAND) -P CMakeFiles/foo.dir/cmake_clean.cmake
.PHONY : foo/CMakeFiles/foo.dir/clean

foo/CMakeFiles/foo.dir/depend:
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ravi/git/commands/C++/CMakefolder/cmake3 /home/ravi/git/commands/C++/CMakefolder/cmake3/foo /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo /home/ravi/git/commands/C++/CMakefolder/cmake3/_builds/foo/CMakeFiles/foo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : foo/CMakeFiles/foo.dir/depend

