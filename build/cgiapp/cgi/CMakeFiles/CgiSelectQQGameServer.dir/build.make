# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /data/colin/newGameSrv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/colin/newGameSrv/build

# Include any dependencies generated for this target.
include cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/depend.make

# Include the progress variables for this target.
include cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/progress.make

# Include the compile flags for this target's objects.
include cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/flags.make

cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.o: cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/flags.make
cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.o: ../cgiapp/cgi/CgiSelectQQGameServer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/data/colin/newGameSrv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.o"
	cd /data/colin/newGameSrv/build/cgiapp/cgi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.o -c /data/colin/newGameSrv/cgiapp/cgi/CgiSelectQQGameServer.cpp

cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.i"
	cd /data/colin/newGameSrv/build/cgiapp/cgi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /data/colin/newGameSrv/cgiapp/cgi/CgiSelectQQGameServer.cpp > CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.i

cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.s"
	cd /data/colin/newGameSrv/build/cgiapp/cgi && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /data/colin/newGameSrv/cgiapp/cgi/CgiSelectQQGameServer.cpp -o CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.s

# Object files for target CgiSelectQQGameServer
CgiSelectQQGameServer_OBJECTS = \
"CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.o"

# External object files for target CgiSelectQQGameServer
CgiSelectQQGameServer_EXTERNAL_OBJECTS =

cgiapp/cgi/CgiSelectQQGameServer: cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/CgiSelectQQGameServer.cpp.o
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/build.make
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/logic/libsg17cgilogic.so
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/data/libsg17cgidata.so
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/platform/libsg17cgiplatform.so
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/kernel/libsg17cgikernel.so
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/common/libsg17cgicommon.so
cgiapp/cgi/CgiSelectQQGameServer: proto/libsg17proto.so
cgiapp/cgi/CgiSelectQQGameServer: save/libsg17save.so
cgiapp/cgi/CgiSelectQQGameServer: cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/data/colin/newGameSrv/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CgiSelectQQGameServer"
	cd /data/colin/newGameSrv/build/cgiapp/cgi && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CgiSelectQQGameServer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/build: cgiapp/cgi/CgiSelectQQGameServer

.PHONY : cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/build

cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/clean:
	cd /data/colin/newGameSrv/build/cgiapp/cgi && $(CMAKE_COMMAND) -P CMakeFiles/CgiSelectQQGameServer.dir/cmake_clean.cmake
.PHONY : cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/clean

cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/depend:
	cd /data/colin/newGameSrv/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/colin/newGameSrv /data/colin/newGameSrv/cgiapp/cgi /data/colin/newGameSrv/build /data/colin/newGameSrv/build/cgiapp/cgi /data/colin/newGameSrv/build/cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cgiapp/cgi/CMakeFiles/CgiSelectQQGameServer.dir/depend

