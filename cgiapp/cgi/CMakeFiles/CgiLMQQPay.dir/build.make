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
include cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/depend.make

# Include the progress variables for this target.
include cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/progress.make

# Include the compile flags for this target's objects.
include cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/flags.make

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/flags.make
cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o: cgiapp/cgi/CgiLMQQPay.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /data/project/newGameSrv/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o"
	cd /data/project/newGameSrv/cgiapp/cgi && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o -c /data/project/newGameSrv/cgiapp/cgi/CgiLMQQPay.cpp

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.i"
	cd /data/project/newGameSrv/cgiapp/cgi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /data/project/newGameSrv/cgiapp/cgi/CgiLMQQPay.cpp > CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.i

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.s"
	cd /data/project/newGameSrv/cgiapp/cgi && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /data/project/newGameSrv/cgiapp/cgi/CgiLMQQPay.cpp -o CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.s

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.requires:
.PHONY : cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.requires

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.provides: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.requires
	$(MAKE) -f cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/build.make cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.provides.build
.PHONY : cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.provides

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.provides.build: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o

# Object files for target CgiLMQQPay
CgiLMQQPay_OBJECTS = \
"CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o"

# External object files for target CgiLMQQPay
CgiLMQQPay_EXTERNAL_OBJECTS =

cgiapp/cgi/CgiLMQQPay: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o
cgiapp/cgi/CgiLMQQPay: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/build.make
cgiapp/cgi/CgiLMQQPay: cgiapp/kernel/libsg17cgikernel.so
cgiapp/cgi/CgiLMQQPay: proto/libsg17proto.so
cgiapp/cgi/CgiLMQQPay: cgiapp/common/libsg17cgicommon.so
cgiapp/cgi/CgiLMQQPay: cgiapp/platform/libsg17cgiplatform.so
cgiapp/cgi/CgiLMQQPay: cgiapp/logic/libsg17cgilogic.so
cgiapp/cgi/CgiLMQQPay: cgiapp/data/libsg17cgidata.so
cgiapp/cgi/CgiLMQQPay: cgiapp/platform/libsg17cgiplatform.so
cgiapp/cgi/CgiLMQQPay: cgiapp/kernel/libsg17cgikernel.so
cgiapp/cgi/CgiLMQQPay: cgiapp/common/libsg17cgicommon.so
cgiapp/cgi/CgiLMQQPay: proto/libsg17proto.so
cgiapp/cgi/CgiLMQQPay: save/libsg17save.so
cgiapp/cgi/CgiLMQQPay: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable CgiLMQQPay"
	cd /data/project/newGameSrv/cgiapp/cgi && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CgiLMQQPay.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/build: cgiapp/cgi/CgiLMQQPay
.PHONY : cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/build

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/requires: cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/CgiLMQQPay.cpp.o.requires
.PHONY : cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/requires

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/clean:
	cd /data/project/newGameSrv/cgiapp/cgi && $(CMAKE_COMMAND) -P CMakeFiles/CgiLMQQPay.dir/cmake_clean.cmake
.PHONY : cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/clean

cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/depend:
	cd /data/project/newGameSrv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /data/project/newGameSrv /data/project/newGameSrv/cgiapp/cgi /data/project/newGameSrv /data/project/newGameSrv/cgiapp/cgi /data/project/newGameSrv/cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cgiapp/cgi/CMakeFiles/CgiLMQQPay.dir/depend
