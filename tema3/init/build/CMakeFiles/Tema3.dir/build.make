# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /mnt/c/Paoo/Paoo_2022/tema3/init

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Paoo/Paoo_2022/tema3/init/build

# Include any dependencies generated for this target.
include CMakeFiles/Tema3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tema3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tema3.dir/flags.make

CMakeFiles/Tema3.dir/main.cpp.o: CMakeFiles/Tema3.dir/flags.make
CMakeFiles/Tema3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Paoo/Paoo_2022/tema3/init/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tema3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tema3.dir/main.cpp.o -c /mnt/c/Paoo/Paoo_2022/tema3/init/main.cpp

CMakeFiles/Tema3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tema3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Paoo/Paoo_2022/tema3/init/main.cpp > CMakeFiles/Tema3.dir/main.cpp.i

CMakeFiles/Tema3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tema3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Paoo/Paoo_2022/tema3/init/main.cpp -o CMakeFiles/Tema3.dir/main.cpp.s

# Object files for target Tema3
Tema3_OBJECTS = \
"CMakeFiles/Tema3.dir/main.cpp.o"

# External object files for target Tema3
Tema3_EXTERNAL_OBJECTS =

Tema3: CMakeFiles/Tema3.dir/main.cpp.o
Tema3: CMakeFiles/Tema3.dir/build.make
Tema3: CMakeFiles/Tema3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Paoo/Paoo_2022/tema3/init/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tema3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tema3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tema3.dir/build: Tema3

.PHONY : CMakeFiles/Tema3.dir/build

CMakeFiles/Tema3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tema3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tema3.dir/clean

CMakeFiles/Tema3.dir/depend:
	cd /mnt/c/Paoo/Paoo_2022/tema3/init/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Paoo/Paoo_2022/tema3/init /mnt/c/Paoo/Paoo_2022/tema3/init /mnt/c/Paoo/Paoo_2022/tema3/init/build /mnt/c/Paoo/Paoo_2022/tema3/init/build /mnt/c/Paoo/Paoo_2022/tema3/init/build/CMakeFiles/Tema3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tema3.dir/depend
