# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\SandSim

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\SandSim\build

# Include any dependencies generated for this target.
include CMakeFiles/SandSim.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SandSim.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SandSim.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SandSim.dir/flags.make

CMakeFiles/SandSim.dir/main.cpp.obj: CMakeFiles/SandSim.dir/flags.make
CMakeFiles/SandSim.dir/main.cpp.obj: ../main.cpp
CMakeFiles/SandSim.dir/main.cpp.obj: CMakeFiles/SandSim.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\SandSim\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SandSim.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SandSim.dir/main.cpp.obj -MF CMakeFiles\SandSim.dir\main.cpp.obj.d -o CMakeFiles\SandSim.dir\main.cpp.obj -c E:\Code\SandSim\main.cpp

CMakeFiles/SandSim.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SandSim.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\SandSim\main.cpp > CMakeFiles\SandSim.dir\main.cpp.i

CMakeFiles/SandSim.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SandSim.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\X86_64~2.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\SandSim\main.cpp -o CMakeFiles\SandSim.dir\main.cpp.s

# Object files for target SandSim
SandSim_OBJECTS = \
"CMakeFiles/SandSim.dir/main.cpp.obj"

# External object files for target SandSim
SandSim_EXTERNAL_OBJECTS =

SandSim.exe: CMakeFiles/SandSim.dir/main.cpp.obj
SandSim.exe: CMakeFiles/SandSim.dir/build.make
SandSim.exe: CMakeFiles/SandSim.dir/linklibs.rsp
SandSim.exe: CMakeFiles/SandSim.dir/objects1.rsp
SandSim.exe: CMakeFiles/SandSim.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\SandSim\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SandSim.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SandSim.dir\link.txt --verbose=$(VERBOSE)
	C:\Windows\System32\WindowsPowerShell\v1.0\powershell.exe -noprofile -executionpolicy Bypass -file C:/dev/vcpkg/scripts/buildsystems/msbuild/applocal.ps1 -targetBinary E:/Code/SandSim/build/SandSim.exe -installedDir C:/dev/vcpkg/installed/x64-windows/bin -OutVariable out

# Rule to build all files generated by this target.
CMakeFiles/SandSim.dir/build: SandSim.exe
.PHONY : CMakeFiles/SandSim.dir/build

CMakeFiles/SandSim.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SandSim.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SandSim.dir/clean

CMakeFiles/SandSim.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Code\SandSim E:\Code\SandSim E:\Code\SandSim\build E:\Code\SandSim\build E:\Code\SandSim\build\CMakeFiles\SandSim.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SandSim.dir/depend
