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
include Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/depend.make

# Include the progress variables for this target.
include Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/flags.make

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/flags.make
Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o: ../../Server/StaticNFrame/NFTest/NFTestPlugin/NFCTestModule.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o -c /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin/NFCTestModule.cpp

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.i"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin/NFCTestModule.cpp > CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.i

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.s"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin/NFCTestModule.cpp -o CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.s

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.requires:

.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.requires

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.provides: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.requires
	$(MAKE) -f Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/build.make Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.provides.build
.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.provides

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.provides.build: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o


Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/flags.make
Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o: ../../Server/StaticNFrame/NFTest/NFTestPlugin/NFTestPlugin.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o -c /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin/NFTestPlugin.cpp

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.i"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin/NFTestPlugin.cpp > CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.i

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.s"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin/NFTestPlugin.cpp -o CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.s

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.requires:

.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.requires

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.provides: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.requires
	$(MAKE) -f Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/build.make Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.provides.build
.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.provides

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.provides.build: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o


# Object files for target NFTestPlugin
NFTestPlugin_OBJECTS = \
"CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o" \
"CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o"

# External object files for target NFTestPlugin
NFTestPlugin_EXTERNAL_OBJECTS =

../run/Dynamic_Debug/libNFTestPlugin.so: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o
../run/Dynamic_Debug/libNFTestPlugin.so: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o
../run/Dynamic_Debug/libNFTestPlugin.so: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/build.make
../run/Dynamic_Debug/libNFTestPlugin.so: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../../../run/Dynamic_Debug/libNFTestPlugin.so"
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NFTestPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/build: ../run/Dynamic_Debug/libNFTestPlugin.so

.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/build

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/requires: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFCTestModule.cpp.o.requires
Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/requires: Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/NFTestPlugin.cpp.o.requires

.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/requires

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/clean:
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin && $(CMAKE_COMMAND) -P CMakeFiles/NFTestPlugin.dir/cmake_clean.cmake
.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/clean

Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/depend:
	cd /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaoyi/workspace/StaticNFrame /home/gaoyi/workspace/StaticNFrame/Server/StaticNFrame/NFTest/NFTestPlugin /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin /home/gaoyi/workspace/StaticNFrame/Product/build_dynamic_debug/Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Server/StaticNFrame/NFTest/NFTestPlugin/CMakeFiles/NFTestPlugin.dir/depend

