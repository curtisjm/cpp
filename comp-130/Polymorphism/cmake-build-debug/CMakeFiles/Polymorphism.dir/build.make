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
CMAKE_SOURCE_DIR = "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Polymorphism.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Polymorphism.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Polymorphism.dir/flags.make

CMakeFiles/Polymorphism.dir/main.cpp.obj: CMakeFiles/Polymorphism.dir/flags.make
CMakeFiles/Polymorphism.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Polymorphism.dir/main.cpp.obj"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Polymorphism.dir\main.cpp.obj -c "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\main.cpp"

CMakeFiles/Polymorphism.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polymorphism.dir/main.cpp.i"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\main.cpp" > CMakeFiles\Polymorphism.dir\main.cpp.i

CMakeFiles/Polymorphism.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polymorphism.dir/main.cpp.s"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\main.cpp" -o CMakeFiles\Polymorphism.dir\main.cpp.s

CMakeFiles/Polymorphism.dir/people.cpp.obj: CMakeFiles/Polymorphism.dir/flags.make
CMakeFiles/Polymorphism.dir/people.cpp.obj: ../people.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Polymorphism.dir/people.cpp.obj"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Polymorphism.dir\people.cpp.obj -c "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\people.cpp"

CMakeFiles/Polymorphism.dir/people.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polymorphism.dir/people.cpp.i"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\people.cpp" > CMakeFiles\Polymorphism.dir\people.cpp.i

CMakeFiles/Polymorphism.dir/people.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polymorphism.dir/people.cpp.s"
	C:\Compilers\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\people.cpp" -o CMakeFiles\Polymorphism.dir\people.cpp.s

# Object files for target Polymorphism
Polymorphism_OBJECTS = \
"CMakeFiles/Polymorphism.dir/main.cpp.obj" \
"CMakeFiles/Polymorphism.dir/people.cpp.obj"

# External object files for target Polymorphism
Polymorphism_EXTERNAL_OBJECTS =

Polymorphism.exe: CMakeFiles/Polymorphism.dir/main.cpp.obj
Polymorphism.exe: CMakeFiles/Polymorphism.dir/people.cpp.obj
Polymorphism.exe: CMakeFiles/Polymorphism.dir/build.make
Polymorphism.exe: CMakeFiles/Polymorphism.dir/linklibs.rsp
Polymorphism.exe: CMakeFiles/Polymorphism.dir/objects1.rsp
Polymorphism.exe: CMakeFiles/Polymorphism.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Polymorphism.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Polymorphism.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Polymorphism.dir/build: Polymorphism.exe

.PHONY : CMakeFiles/Polymorphism.dir/build

CMakeFiles/Polymorphism.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Polymorphism.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Polymorphism.dir/clean

CMakeFiles/Polymorphism.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism" "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism" "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug" "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug" "C:\Users\curti\Google Drive\CLion\Comp 130\Polymorphism\cmake-build-debug\CMakeFiles\Polymorphism.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Polymorphism.dir/depend
