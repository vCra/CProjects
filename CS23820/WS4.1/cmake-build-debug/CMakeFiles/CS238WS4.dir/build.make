# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /opt/JetBrains/CLion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/JetBrains/CLion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aaron@vcra.net/ClionProjects/CS238WS4.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CS238WS4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS238WS4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS238WS4.dir/flags.make

CMakeFiles/CS238WS4.dir/main.cpp.o: CMakeFiles/CS238WS4.dir/flags.make
CMakeFiles/CS238WS4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS238WS4.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CS238WS4.dir/main.cpp.o -c /home/aaron@vcra.net/ClionProjects/CS238WS4.1/main.cpp

CMakeFiles/CS238WS4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS238WS4.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aaron@vcra.net/ClionProjects/CS238WS4.1/main.cpp > CMakeFiles/CS238WS4.dir/main.cpp.i

CMakeFiles/CS238WS4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS238WS4.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aaron@vcra.net/ClionProjects/CS238WS4.1/main.cpp -o CMakeFiles/CS238WS4.dir/main.cpp.s

CMakeFiles/CS238WS4.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CS238WS4.dir/main.cpp.o.requires

CMakeFiles/CS238WS4.dir/main.cpp.o.provides: CMakeFiles/CS238WS4.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CS238WS4.dir/build.make CMakeFiles/CS238WS4.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CS238WS4.dir/main.cpp.o.provides

CMakeFiles/CS238WS4.dir/main.cpp.o.provides.build: CMakeFiles/CS238WS4.dir/main.cpp.o


CMakeFiles/CS238WS4.dir/fileCode.c.o: CMakeFiles/CS238WS4.dir/flags.make
CMakeFiles/CS238WS4.dir/fileCode.c.o: ../fileCode.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CS238WS4.dir/fileCode.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CS238WS4.dir/fileCode.c.o   -c /home/aaron@vcra.net/ClionProjects/CS238WS4.1/fileCode.c

CMakeFiles/CS238WS4.dir/fileCode.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS238WS4.dir/fileCode.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aaron@vcra.net/ClionProjects/CS238WS4.1/fileCode.c > CMakeFiles/CS238WS4.dir/fileCode.c.i

CMakeFiles/CS238WS4.dir/fileCode.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS238WS4.dir/fileCode.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aaron@vcra.net/ClionProjects/CS238WS4.1/fileCode.c -o CMakeFiles/CS238WS4.dir/fileCode.c.s

CMakeFiles/CS238WS4.dir/fileCode.c.o.requires:

.PHONY : CMakeFiles/CS238WS4.dir/fileCode.c.o.requires

CMakeFiles/CS238WS4.dir/fileCode.c.o.provides: CMakeFiles/CS238WS4.dir/fileCode.c.o.requires
	$(MAKE) -f CMakeFiles/CS238WS4.dir/build.make CMakeFiles/CS238WS4.dir/fileCode.c.o.provides.build
.PHONY : CMakeFiles/CS238WS4.dir/fileCode.c.o.provides

CMakeFiles/CS238WS4.dir/fileCode.c.o.provides.build: CMakeFiles/CS238WS4.dir/fileCode.c.o


# Object files for target CS238WS4
CS238WS4_OBJECTS = \
"CMakeFiles/CS238WS4.dir/main.cpp.o" \
"CMakeFiles/CS238WS4.dir/fileCode.c.o"

# External object files for target CS238WS4
CS238WS4_EXTERNAL_OBJECTS =

CS238WS4: CMakeFiles/CS238WS4.dir/main.cpp.o
CS238WS4: CMakeFiles/CS238WS4.dir/fileCode.c.o
CS238WS4: CMakeFiles/CS238WS4.dir/build.make
CS238WS4: CMakeFiles/CS238WS4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CS238WS4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CS238WS4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS238WS4.dir/build: CS238WS4

.PHONY : CMakeFiles/CS238WS4.dir/build

CMakeFiles/CS238WS4.dir/requires: CMakeFiles/CS238WS4.dir/main.cpp.o.requires
CMakeFiles/CS238WS4.dir/requires: CMakeFiles/CS238WS4.dir/fileCode.c.o.requires

.PHONY : CMakeFiles/CS238WS4.dir/requires

CMakeFiles/CS238WS4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CS238WS4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CS238WS4.dir/clean

CMakeFiles/CS238WS4.dir/depend:
	cd /home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron@vcra.net/ClionProjects/CS238WS4.1 /home/aaron@vcra.net/ClionProjects/CS238WS4.1 /home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug /home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug /home/aaron@vcra.net/ClionProjects/CS238WS4.1/cmake-build-debug/CMakeFiles/CS238WS4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CS238WS4.dir/depend

