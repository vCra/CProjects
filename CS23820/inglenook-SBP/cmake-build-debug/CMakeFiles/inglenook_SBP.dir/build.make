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
CMAKE_SOURCE_DIR = /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/inglenook_SBP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/inglenook_SBP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/inglenook_SBP.dir/flags.make

CMakeFiles/inglenook_SBP.dir/main.c.o: CMakeFiles/inglenook_SBP.dir/flags.make
CMakeFiles/inglenook_SBP.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/inglenook_SBP.dir/main.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/inglenook_SBP.dir/main.c.o   -c /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/main.c

CMakeFiles/inglenook_SBP.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/inglenook_SBP.dir/main.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/main.c > CMakeFiles/inglenook_SBP.dir/main.c.i

CMakeFiles/inglenook_SBP.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/inglenook_SBP.dir/main.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/main.c -o CMakeFiles/inglenook_SBP.dir/main.c.s

CMakeFiles/inglenook_SBP.dir/main.c.o.requires:

.PHONY : CMakeFiles/inglenook_SBP.dir/main.c.o.requires

CMakeFiles/inglenook_SBP.dir/main.c.o.provides: CMakeFiles/inglenook_SBP.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/inglenook_SBP.dir/build.make CMakeFiles/inglenook_SBP.dir/main.c.o.provides.build
.PHONY : CMakeFiles/inglenook_SBP.dir/main.c.o.provides

CMakeFiles/inglenook_SBP.dir/main.c.o.provides.build: CMakeFiles/inglenook_SBP.dir/main.c.o


# Object files for target inglenook_SBP
inglenook_SBP_OBJECTS = \
"CMakeFiles/inglenook_SBP.dir/main.c.o"

# External object files for target inglenook_SBP
inglenook_SBP_EXTERNAL_OBJECTS =

inglenook_SBP: CMakeFiles/inglenook_SBP.dir/main.c.o
inglenook_SBP: CMakeFiles/inglenook_SBP.dir/build.make
inglenook_SBP: CMakeFiles/inglenook_SBP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable inglenook_SBP"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/inglenook_SBP.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/inglenook_SBP.dir/build: inglenook_SBP

.PHONY : CMakeFiles/inglenook_SBP.dir/build

CMakeFiles/inglenook_SBP.dir/requires: CMakeFiles/inglenook_SBP.dir/main.c.o.requires

.PHONY : CMakeFiles/inglenook_SBP.dir/requires

CMakeFiles/inglenook_SBP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/inglenook_SBP.dir/cmake_clean.cmake
.PHONY : CMakeFiles/inglenook_SBP.dir/clean

CMakeFiles/inglenook_SBP.dir/depend:
	cd /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug /home/aaron@vcra.net/ClionProjects/CS23820/inglenook-SBP/cmake-build-debug/CMakeFiles/inglenook_SBP.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/inglenook_SBP.dir/depend
