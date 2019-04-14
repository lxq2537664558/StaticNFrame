# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/gaoyi/workspace/StaticNFrame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug

# Include any dependencies generated for this target.
include Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/depend.make

# Include the progress variables for this target.
include Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/progress.make

# Include the compile flags for this target's objects.
include Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/flags.make

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/flags.make
Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o: ../../Server/Dependencies/sqlite3/sqlite3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Sqlite3.dir/sqlite3.c.o   -c /home/gaoyi/workspace/StaticNFrame/Server/Dependencies/sqlite3/sqlite3.c

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Sqlite3.dir/sqlite3.c.i"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/gaoyi/workspace/StaticNFrame/Server/Dependencies/sqlite3/sqlite3.c > CMakeFiles/Sqlite3.dir/sqlite3.c.i

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Sqlite3.dir/sqlite3.c.s"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/gaoyi/workspace/StaticNFrame/Server/Dependencies/sqlite3/sqlite3.c -o CMakeFiles/Sqlite3.dir/sqlite3.c.s

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.requires:

.PHONY : Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.requires

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.provides: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.requires
	$(MAKE) -f Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/build.make Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.provides.build
.PHONY : Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.provides

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.provides.build: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o


# Object files for target Sqlite3
Sqlite3_OBJECTS = \
"CMakeFiles/Sqlite3.dir/sqlite3.c.o"

# External object files for target Sqlite3
Sqlite3_EXTERNAL_OBJECTS =

../Lib/Dynamic_Debug/libSqlite3.a: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o
../Lib/Dynamic_Debug/libSqlite3.a: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/build.make
../Lib/Dynamic_Debug/libSqlite3.a: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library ../../../../Lib/Dynamic_Debug/libSqlite3.a"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 && $(CMAKE_COMMAND) -P CMakeFiles/Sqlite3.dir/cmake_clean_target.cmake
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sqlite3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/build: ../Lib/Dynamic_Debug/libSqlite3.a

.PHONY : Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/build

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/requires: Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/sqlite3.c.o.requires

.PHONY : Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/requires

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/clean:
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 && $(CMAKE_COMMAND) -P CMakeFiles/Sqlite3.dir/cmake_clean.cmake
.PHONY : Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/clean

Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/depend:
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaoyi/workspace/StaticNFrame /home/gaoyi/workspace/StaticNFrame/Server/Dependencies/sqlite3 /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3 /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Server/Dependencies/sqlite3/CMakeFiles/Sqlite3.dir/depend

