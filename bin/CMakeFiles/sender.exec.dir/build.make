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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin

# Include any dependencies generated for this target.
include CMakeFiles/sender.exec.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sender.exec.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sender.exec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sender.exec.dir/flags.make

CMakeFiles/sender.exec.dir/sender.cpp.o: CMakeFiles/sender.exec.dir/flags.make
CMakeFiles/sender.exec.dir/sender.cpp.o: /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src/sender.cpp
CMakeFiles/sender.exec.dir/sender.cpp.o: CMakeFiles/sender.exec.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sender.exec.dir/sender.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sender.exec.dir/sender.cpp.o -MF CMakeFiles/sender.exec.dir/sender.cpp.o.d -o CMakeFiles/sender.exec.dir/sender.cpp.o -c /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src/sender.cpp

CMakeFiles/sender.exec.dir/sender.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sender.exec.dir/sender.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src/sender.cpp > CMakeFiles/sender.exec.dir/sender.cpp.i

CMakeFiles/sender.exec.dir/sender.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sender.exec.dir/sender.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src/sender.cpp -o CMakeFiles/sender.exec.dir/sender.cpp.s

# Object files for target sender.exec
sender_exec_OBJECTS = \
"CMakeFiles/sender.exec.dir/sender.cpp.o"

# External object files for target sender.exec
sender_exec_EXTERNAL_OBJECTS =

sender.exec: CMakeFiles/sender.exec.dir/sender.cpp.o
sender.exec: CMakeFiles/sender.exec.dir/build.make
sender.exec: CMakeFiles/sender.exec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sender.exec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sender.exec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sender.exec.dir/build: sender.exec
.PHONY : CMakeFiles/sender.exec.dir/build

CMakeFiles/sender.exec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sender.exec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sender.exec.dir/clean

CMakeFiles/sender.exec.dir/depend:
	cd /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/src /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin /home/gabriel/Desktop/WorkSpace/SimChats/SimChat/bin/CMakeFiles/sender.exec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sender.exec.dir/depend

