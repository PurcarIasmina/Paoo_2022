# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build

# Include any dependencies generated for this target.
include CMakeFiles/init.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/init.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/init.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/init.dir/flags.make

CMakeFiles/init.dir/first.cpp.o: CMakeFiles/init.dir/flags.make
CMakeFiles/init.dir/first.cpp.o: /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/first.cpp
CMakeFiles/init.dir/first.cpp.o: CMakeFiles/init.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/init.dir/first.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/init.dir/first.cpp.o -MF CMakeFiles/init.dir/first.cpp.o.d -o CMakeFiles/init.dir/first.cpp.o -c /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/first.cpp

CMakeFiles/init.dir/first.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/init.dir/first.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/first.cpp > CMakeFiles/init.dir/first.cpp.i

CMakeFiles/init.dir/first.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/init.dir/first.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/first.cpp -o CMakeFiles/init.dir/first.cpp.s

# Object files for target init
init_OBJECTS = \
"CMakeFiles/init.dir/first.cpp.o"

# External object files for target init
init_EXTERNAL_OBJECTS =

init: CMakeFiles/init.dir/first.cpp.o
init: CMakeFiles/init.dir/build.make
init: CMakeFiles/init.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable init"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/init.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/init.dir/build: init
.PHONY : CMakeFiles/init.dir/build

CMakeFiles/init.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/init.dir/cmake_clean.cmake
.PHONY : CMakeFiles/init.dir/clean

CMakeFiles/init.dir/depend:
	cd /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build /Users/iasminapurcar/Documents/PAOO_2022/Paoo_2022/lab4_t1/init/build/CMakeFiles/init.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/init.dir/depend

