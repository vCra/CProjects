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
CMAKE_SOURCE_DIR = /home/aaron@vcra.net/ClionProjects/SBP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SBP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SBP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SBP.dir/flags.make

CMakeFiles/SBP.dir/main.cpp.o: CMakeFiles/SBP.dir/flags.make
CMakeFiles/SBP.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SBP.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SBP.dir/main.cpp.o -c /home/aaron@vcra.net/ClionProjects/SBP/main.cpp

CMakeFiles/SBP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SBP.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aaron@vcra.net/ClionProjects/SBP/main.cpp > CMakeFiles/SBP.dir/main.cpp.i

CMakeFiles/SBP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SBP.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aaron@vcra.net/ClionProjects/SBP/main.cpp -o CMakeFiles/SBP.dir/main.cpp.s

CMakeFiles/SBP.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/SBP.dir/main.cpp.o.requires

CMakeFiles/SBP.dir/main.cpp.o.provides: CMakeFiles/SBP.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/SBP.dir/build.make CMakeFiles/SBP.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/SBP.dir/main.cpp.o.provides

CMakeFiles/SBP.dir/main.cpp.o.provides.build: CMakeFiles/SBP.dir/main.cpp.o


CMakeFiles/SBP.dir/main.c.o: CMakeFiles/SBP.dir/flags.make
CMakeFiles/SBP.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SBP.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/SBP.dir/main.c.o   -c /home/aaron@vcra.net/ClionProjects/SBP/main.c

CMakeFiles/SBP.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SBP.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aaron@vcra.net/ClionProjects/SBP/main.c > CMakeFiles/SBP.dir/main.c.i

CMakeFiles/SBP.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SBP.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aaron@vcra.net/ClionProjects/SBP/main.c -o CMakeFiles/SBP.dir/main.c.s

CMakeFiles/SBP.dir/main.c.o.requires:

.PHONY : CMakeFiles/SBP.dir/main.c.o.requires

CMakeFiles/SBP.dir/main.c.o.provides: CMakeFiles/SBP.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/SBP.dir/build.make CMakeFiles/SBP.dir/main.c.o.provides.build
.PHONY : CMakeFiles/SBP.dir/main.c.o.provides

CMakeFiles/SBP.dir/main.c.o.provides.build: CMakeFiles/SBP.dir/main.c.o


# Object files for target SBP
SBP_OBJECTS = \
"CMakeFiles/SBP.dir/main.cpp.o" \
"CMakeFiles/SBP.dir/main.c.o"

# External object files for target SBP
SBP_EXTERNAL_OBJECTS =

SBP: CMakeFiles/SBP.dir/main.cpp.o
SBP: CMakeFiles/SBP.dir/main.c.o
SBP: CMakeFiles/SBP.dir/build.make
SBP: CMakeFiles/SBP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable SBP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SBP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SBP.dir/build: SBP

.PHONY : CMakeFiles/SBP.dir/build

CMakeFiles/SBP.dir/requires: CMakeFiles/SBP.dir/main.cpp.o.requires
CMakeFiles/SBP.dir/requires: CMakeFiles/SBP.dir/main.c.o.requires

.PHONY : CMakeFiles/SBP.dir/requires

CMakeFiles/SBP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SBP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SBP.dir/clean

CMakeFiles/SBP.dir/depend:
	cd /home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron@vcra.net/ClionProjects/SBP /home/aaron@vcra.net/ClionProjects/SBP /home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug /home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug /home/aaron@vcra.net/ClionProjects/SBP/cmake-build-debug/CMakeFiles/SBP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SBP.dir/depend

