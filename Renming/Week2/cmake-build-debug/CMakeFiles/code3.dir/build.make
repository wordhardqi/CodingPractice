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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/code3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/code3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/code3.dir/flags.make

CMakeFiles/code3.dir/code3.cpp.o: CMakeFiles/code3.dir/flags.make
CMakeFiles/code3.dir/code3.cpp.o: ../code3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/code3.dir/code3.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/code3.dir/code3.cpp.o -c /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/code3.cpp

CMakeFiles/code3.dir/code3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/code3.dir/code3.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/code3.cpp > CMakeFiles/code3.dir/code3.cpp.i

CMakeFiles/code3.dir/code3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/code3.dir/code3.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/code3.cpp -o CMakeFiles/code3.dir/code3.cpp.s

CMakeFiles/code3.dir/code3.cpp.o.requires:

.PHONY : CMakeFiles/code3.dir/code3.cpp.o.requires

CMakeFiles/code3.dir/code3.cpp.o.provides: CMakeFiles/code3.dir/code3.cpp.o.requires
	$(MAKE) -f CMakeFiles/code3.dir/build.make CMakeFiles/code3.dir/code3.cpp.o.provides.build
.PHONY : CMakeFiles/code3.dir/code3.cpp.o.provides

CMakeFiles/code3.dir/code3.cpp.o.provides.build: CMakeFiles/code3.dir/code3.cpp.o


# Object files for target code3
code3_OBJECTS = \
"CMakeFiles/code3.dir/code3.cpp.o"

# External object files for target code3
code3_EXTERNAL_OBJECTS =

code3: CMakeFiles/code3.dir/code3.cpp.o
code3: CMakeFiles/code3.dir/build.make
code3: CMakeFiles/code3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable code3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/code3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/code3.dir/build: code3

.PHONY : CMakeFiles/code3.dir/build

CMakeFiles/code3.dir/requires: CMakeFiles/code3.dir/code3.cpp.o.requires

.PHONY : CMakeFiles/code3.dir/requires

CMakeFiles/code3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/code3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/code3.dir/clean

CMakeFiles/code3.dir/depend:
	cd /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2 /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2 /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug /Users/Renming/PycharmProjects/CodingPractice/Renming/Week2/cmake-build-debug/CMakeFiles/code3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/code3.dir/depend

