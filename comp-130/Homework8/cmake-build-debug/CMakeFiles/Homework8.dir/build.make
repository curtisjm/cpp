# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Homework8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Homework8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Homework8.dir/flags.make

CMakeFiles/Homework8.dir/Blockchains.cpp.obj: CMakeFiles/Homework8.dir/flags.make
CMakeFiles/Homework8.dir/Blockchains.cpp.obj: ../Blockchains.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Homework8.dir/Blockchains.cpp.obj"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Homework8.dir\Blockchains.cpp.obj -c "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\Blockchains.cpp"

CMakeFiles/Homework8.dir/Blockchains.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Homework8.dir/Blockchains.cpp.i"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\Blockchains.cpp" > CMakeFiles\Homework8.dir\Blockchains.cpp.i

CMakeFiles/Homework8.dir/Blockchains.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Homework8.dir/Blockchains.cpp.s"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\Blockchains.cpp" -o CMakeFiles\Homework8.dir\Blockchains.cpp.s

# Object files for target Homework8
Homework8_OBJECTS = \
"CMakeFiles/Homework8.dir/Blockchains.cpp.obj"

# External object files for target Homework8
Homework8_EXTERNAL_OBJECTS =

Homework8.exe: CMakeFiles/Homework8.dir/Blockchains.cpp.obj
Homework8.exe: CMakeFiles/Homework8.dir/build.make
Homework8.exe: CMakeFiles/Homework8.dir/linklibs.rsp
Homework8.exe: CMakeFiles/Homework8.dir/objects1.rsp
Homework8.exe: CMakeFiles/Homework8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Homework8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Homework8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Homework8.dir/build: Homework8.exe

.PHONY : CMakeFiles/Homework8.dir/build

CMakeFiles/Homework8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Homework8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Homework8.dir/clean

CMakeFiles/Homework8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8" "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8" "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\cmake-build-debug" "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\cmake-build-debug" "C:\Users\curti\Google Drive\CLion\Comp 130\Homework8\cmake-build-debug\CMakeFiles\Homework8.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Homework8.dir/depend

