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
CMAKE_COMMAND = /home/paypaytr/Desktop/clion-2016.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/paypaytr/Desktop/clion-2016.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/paypaytr/CLionProjects/longScrabble

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paypaytr/CLionProjects/longScrabble/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/longScrabble.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/longScrabble.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/longScrabble.dir/flags.make

CMakeFiles/longScrabble.dir/main.cpp.o: CMakeFiles/longScrabble.dir/flags.make
CMakeFiles/longScrabble.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paypaytr/CLionProjects/longScrabble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/longScrabble.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/longScrabble.dir/main.cpp.o -c /home/paypaytr/CLionProjects/longScrabble/main.cpp

CMakeFiles/longScrabble.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/longScrabble.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paypaytr/CLionProjects/longScrabble/main.cpp > CMakeFiles/longScrabble.dir/main.cpp.i

CMakeFiles/longScrabble.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/longScrabble.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paypaytr/CLionProjects/longScrabble/main.cpp -o CMakeFiles/longScrabble.dir/main.cpp.s

CMakeFiles/longScrabble.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/longScrabble.dir/main.cpp.o.requires

CMakeFiles/longScrabble.dir/main.cpp.o.provides: CMakeFiles/longScrabble.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/longScrabble.dir/build.make CMakeFiles/longScrabble.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/longScrabble.dir/main.cpp.o.provides

CMakeFiles/longScrabble.dir/main.cpp.o.provides.build: CMakeFiles/longScrabble.dir/main.cpp.o


CMakeFiles/longScrabble.dir/dataBase.cpp.o: CMakeFiles/longScrabble.dir/flags.make
CMakeFiles/longScrabble.dir/dataBase.cpp.o: ../dataBase.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/paypaytr/CLionProjects/longScrabble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/longScrabble.dir/dataBase.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/longScrabble.dir/dataBase.cpp.o -c /home/paypaytr/CLionProjects/longScrabble/dataBase.cpp

CMakeFiles/longScrabble.dir/dataBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/longScrabble.dir/dataBase.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/paypaytr/CLionProjects/longScrabble/dataBase.cpp > CMakeFiles/longScrabble.dir/dataBase.cpp.i

CMakeFiles/longScrabble.dir/dataBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/longScrabble.dir/dataBase.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/paypaytr/CLionProjects/longScrabble/dataBase.cpp -o CMakeFiles/longScrabble.dir/dataBase.cpp.s

CMakeFiles/longScrabble.dir/dataBase.cpp.o.requires:

.PHONY : CMakeFiles/longScrabble.dir/dataBase.cpp.o.requires

CMakeFiles/longScrabble.dir/dataBase.cpp.o.provides: CMakeFiles/longScrabble.dir/dataBase.cpp.o.requires
	$(MAKE) -f CMakeFiles/longScrabble.dir/build.make CMakeFiles/longScrabble.dir/dataBase.cpp.o.provides.build
.PHONY : CMakeFiles/longScrabble.dir/dataBase.cpp.o.provides

CMakeFiles/longScrabble.dir/dataBase.cpp.o.provides.build: CMakeFiles/longScrabble.dir/dataBase.cpp.o


# Object files for target longScrabble
longScrabble_OBJECTS = \
"CMakeFiles/longScrabble.dir/main.cpp.o" \
"CMakeFiles/longScrabble.dir/dataBase.cpp.o"

# External object files for target longScrabble
longScrabble_EXTERNAL_OBJECTS =

longScrabble: CMakeFiles/longScrabble.dir/main.cpp.o
longScrabble: CMakeFiles/longScrabble.dir/dataBase.cpp.o
longScrabble: CMakeFiles/longScrabble.dir/build.make
longScrabble: CMakeFiles/longScrabble.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/paypaytr/CLionProjects/longScrabble/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable longScrabble"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/longScrabble.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/longScrabble.dir/build: longScrabble

.PHONY : CMakeFiles/longScrabble.dir/build

CMakeFiles/longScrabble.dir/requires: CMakeFiles/longScrabble.dir/main.cpp.o.requires
CMakeFiles/longScrabble.dir/requires: CMakeFiles/longScrabble.dir/dataBase.cpp.o.requires

.PHONY : CMakeFiles/longScrabble.dir/requires

CMakeFiles/longScrabble.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/longScrabble.dir/cmake_clean.cmake
.PHONY : CMakeFiles/longScrabble.dir/clean

CMakeFiles/longScrabble.dir/depend:
	cd /home/paypaytr/CLionProjects/longScrabble/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paypaytr/CLionProjects/longScrabble /home/paypaytr/CLionProjects/longScrabble /home/paypaytr/CLionProjects/longScrabble/cmake-build-debug /home/paypaytr/CLionProjects/longScrabble/cmake-build-debug /home/paypaytr/CLionProjects/longScrabble/cmake-build-debug/CMakeFiles/longScrabble.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/longScrabble.dir/depend

