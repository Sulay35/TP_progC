# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/aysul/Downloads/CLion-2023.2.2/clion-2023.2.2/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/aysul/Downloads/CLion-2023.2.2/clion-2023.2.2/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tuto_debogueur.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tuto_debogueur.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tuto_debogueur.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tuto_debogueur.dir/flags.make

CMakeFiles/tuto_debogueur.dir/main.c.o: CMakeFiles/tuto_debogueur.dir/flags.make
CMakeFiles/tuto_debogueur.dir/main.c.o: /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/main.c
CMakeFiles/tuto_debogueur.dir/main.c.o: CMakeFiles/tuto_debogueur.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/tuto_debogueur.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/tuto_debogueur.dir/main.c.o -MF CMakeFiles/tuto_debogueur.dir/main.c.o.d -o CMakeFiles/tuto_debogueur.dir/main.c.o -c /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/main.c

CMakeFiles/tuto_debogueur.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tuto_debogueur.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/main.c > CMakeFiles/tuto_debogueur.dir/main.c.i

CMakeFiles/tuto_debogueur.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tuto_debogueur.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/main.c -o CMakeFiles/tuto_debogueur.dir/main.c.s

# Object files for target tuto_debogueur
tuto_debogueur_OBJECTS = \
"CMakeFiles/tuto_debogueur.dir/main.c.o"

# External object files for target tuto_debogueur
tuto_debogueur_EXTERNAL_OBJECTS =

tuto_debogueur: CMakeFiles/tuto_debogueur.dir/main.c.o
tuto_debogueur: CMakeFiles/tuto_debogueur.dir/build.make
tuto_debogueur: CMakeFiles/tuto_debogueur.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable tuto_debogueur"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tuto_debogueur.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tuto_debogueur.dir/build: tuto_debogueur
.PHONY : CMakeFiles/tuto_debogueur.dir/build

CMakeFiles/tuto_debogueur.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tuto_debogueur.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tuto_debogueur.dir/clean

CMakeFiles/tuto_debogueur.dir/depend:
	cd /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug /home/aysul/Documents/INSA/3INFO/progC/TPs/TP2/tuto-debogueur/cmake-build-debug/CMakeFiles/tuto_debogueur.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tuto_debogueur.dir/depend

