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
CMAKE_SOURCE_DIR = /home/ravi/git/commands/C++/CMakefolder/cmake3/boo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds

# Include any dependencies generated for this target.
include CMakeFiles/boo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/boo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/boo.dir/flags.make

CMakeFiles/boo.dir/boo.cpp.o: CMakeFiles/boo.dir/flags.make
CMakeFiles/boo.dir/boo.cpp.o: ../boo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/boo.dir/boo.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boo.dir/boo.cpp.o -c /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/boo.cpp

CMakeFiles/boo.dir/boo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boo.dir/boo.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/boo.cpp > CMakeFiles/boo.dir/boo.cpp.i

CMakeFiles/boo.dir/boo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boo.dir/boo.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/boo.cpp -o CMakeFiles/boo.dir/boo.cpp.s

CMakeFiles/boo.dir/boo.cpp.o.requires:

.PHONY : CMakeFiles/boo.dir/boo.cpp.o.requires

CMakeFiles/boo.dir/boo.cpp.o.provides: CMakeFiles/boo.dir/boo.cpp.o.requires
	$(MAKE) -f CMakeFiles/boo.dir/build.make CMakeFiles/boo.dir/boo.cpp.o.provides.build
.PHONY : CMakeFiles/boo.dir/boo.cpp.o.provides

CMakeFiles/boo.dir/boo.cpp.o.provides.build: CMakeFiles/boo.dir/boo.cpp.o


# Object files for target boo
boo_OBJECTS = \
"CMakeFiles/boo.dir/boo.cpp.o"

# External object files for target boo
boo_EXTERNAL_OBJECTS =

boo: CMakeFiles/boo.dir/boo.cpp.o
boo: CMakeFiles/boo.dir/build.make
boo: CMakeFiles/boo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable boo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/boo.dir/build: boo

.PHONY : CMakeFiles/boo.dir/build

CMakeFiles/boo.dir/requires: CMakeFiles/boo.dir/boo.cpp.o.requires

.PHONY : CMakeFiles/boo.dir/requires

CMakeFiles/boo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/boo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/boo.dir/clean

CMakeFiles/boo.dir/depend:
	cd /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ravi/git/commands/C++/CMakefolder/cmake3/boo /home/ravi/git/commands/C++/CMakefolder/cmake3/boo /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds /home/ravi/git/commands/C++/CMakefolder/cmake3/boo/_builds/CMakeFiles/boo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/boo.dir/depend

