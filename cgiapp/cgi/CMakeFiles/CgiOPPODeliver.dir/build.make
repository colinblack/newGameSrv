# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /data/project/newGameSrv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /data/project/newGameSrv

# Include any dependencies generated for this target.
include cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/depend.make

# Include the progress variables for this target.
include cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/progress.make

# Include the compile flags for this target's objects.
include cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/flags.make

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/flags.make
cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o: cgiapp/cgi/CgiOPPODeliver.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /data/project/newGameSrv/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o"
	cd /data/project/newGameSrv/cgiapp/cgi && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o -c /data/project/newGameSrv/cgiapp/cgi/CgiOPPODeliver.cpp

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.i"
	cd /data/project/newGameSrv/cgiapp/cgi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /data/project/newGameSrv/cgiapp/cgi/CgiOPPODeliver.cpp > CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.i

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.s"
	cd /data/project/newGameSrv/cgiapp/cgi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /data/project/newGameSrv/cgiapp/cgi/CgiOPPODeliver.cpp -o CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.s

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.requires:
.PHONY : cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.requires

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.provides: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.requires
	$(MAKE) -f cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/build.make cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.provides.build
.PHONY : cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.provides

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.provides.build: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o

# Object files for target CgiOPPODeliver
CgiOPPODeliver_OBJECTS = \
"CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o"

# External object files for target CgiOPPODeliver
CgiOPPODeliver_EXTERNAL_OBJECTS =

cgiapp/cgi/CgiOPPODeliver: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o
cgiapp/cgi/CgiOPPODeliver: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/build.make
cgiapp/cgi/CgiOPPODeliver: cgiapp/kernel/libsg17cgikernel.so
cgiapp/cgi/CgiOPPODeliver: proto/libsg17proto.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/common/libsg17cgicommon.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/platform/libsg17cgiplatform.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/logic/libsg17cgilogic.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/data/libsg17cgidata.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/platform/libsg17cgiplatform.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/kernel/libsg17cgikernel.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/common/libsg17cgicommon.so
cgiapp/cgi/CgiOPPODeliver: proto/libsg17proto.so
cgiapp/cgi/CgiOPPODeliver: save/libsg17save.so
cgiapp/cgi/CgiOPPODeliver: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable CgiOPPODeliver"
	cd /data/project/newGameSrv/cgiapp/cgi && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CgiOPPODeliver.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/build: cgiapp/cgi/CgiOPPODeliver
.PHONY : cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/build

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/requires: cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/CgiOPPODeliver.cpp.o.requires
.PHONY : cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/requires

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/clean:
	cd /data/project/newGameSrv/cgiapp/cgi && $(CMAKE_COMMAND) -P CMakeFiles/CgiOPPODeliver.dir/cmake_clean.cmake
.PHONY : cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/clean

cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/depend:
	cd /data/project/newGameSrv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/project/newGameSrv /data/project/newGameSrv/cgiapp/cgi /data/project/newGameSrv /data/project/newGameSrv/cgiapp/cgi /data/project/newGameSrv/cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cgiapp/cgi/CMakeFiles/CgiOPPODeliver.dir/depend

