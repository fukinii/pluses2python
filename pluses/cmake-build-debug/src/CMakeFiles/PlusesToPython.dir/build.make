# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/164/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/164/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fukin/spec_train/pluses2python/pluses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug

# Include any dependencies generated for this target.
include src/CMakeFiles/PlusesToPython.dir/depend.make
# Include the progress variables for this target.
include src/CMakeFiles/PlusesToPython.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/PlusesToPython.dir/flags.make

src/CMakeFiles/PlusesToPython.dir/Add.cpp.o: src/CMakeFiles/PlusesToPython.dir/flags.make
src/CMakeFiles/PlusesToPython.dir/Add.cpp.o: ../src/Add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/PlusesToPython.dir/Add.cpp.o"
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlusesToPython.dir/Add.cpp.o -c /home/fukin/spec_train/pluses2python/pluses/src/Add.cpp

src/CMakeFiles/PlusesToPython.dir/Add.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlusesToPython.dir/Add.cpp.i"
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fukin/spec_train/pluses2python/pluses/src/Add.cpp > CMakeFiles/PlusesToPython.dir/Add.cpp.i

src/CMakeFiles/PlusesToPython.dir/Add.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlusesToPython.dir/Add.cpp.s"
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fukin/spec_train/pluses2python/pluses/src/Add.cpp -o CMakeFiles/PlusesToPython.dir/Add.cpp.s

# Object files for target PlusesToPython
PlusesToPython_OBJECTS = \
"CMakeFiles/PlusesToPython.dir/Add.cpp.o"

# External object files for target PlusesToPython
PlusesToPython_EXTERNAL_OBJECTS =

src/libPlusesToPython.a: src/CMakeFiles/PlusesToPython.dir/Add.cpp.o
src/libPlusesToPython.a: src/CMakeFiles/PlusesToPython.dir/build.make
src/libPlusesToPython.a: src/CMakeFiles/PlusesToPython.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libPlusesToPython.a"
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/PlusesToPython.dir/cmake_clean_target.cmake
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PlusesToPython.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/PlusesToPython.dir/build: src/libPlusesToPython.a
.PHONY : src/CMakeFiles/PlusesToPython.dir/build

src/CMakeFiles/PlusesToPython.dir/clean:
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src && $(CMAKE_COMMAND) -P CMakeFiles/PlusesToPython.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/PlusesToPython.dir/clean

src/CMakeFiles/PlusesToPython.dir/depend:
	cd /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fukin/spec_train/pluses2python/pluses /home/fukin/spec_train/pluses2python/pluses/src /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src /home/fukin/spec_train/pluses2python/pluses/cmake-build-debug/src/CMakeFiles/PlusesToPython.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/PlusesToPython.dir/depend

