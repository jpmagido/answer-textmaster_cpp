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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build

# Include any dependencies generated for this target.
include CMakeFiles/CheckoutTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CheckoutTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CheckoutTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CheckoutTest.dir/flags.make

CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o: CMakeFiles/CheckoutTest.dir/flags.make
CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o: /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/test/checkout_test.cc
CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o: CMakeFiles/CheckoutTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o -MF CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o.d -o CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o -c /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/test/checkout_test.cc

CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/test/checkout_test.cc > CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.i

CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/test/checkout_test.cc -o CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.s

# Object files for target CheckoutTest
CheckoutTest_OBJECTS = \
"CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o"

# External object files for target CheckoutTest
CheckoutTest_EXTERNAL_OBJECTS =

CheckoutTest: CMakeFiles/CheckoutTest.dir/test/checkout_test.cc.o
CheckoutTest: CMakeFiles/CheckoutTest.dir/build.make
CheckoutTest: lib/libgtest_main.a
CheckoutTest: lib/libgtest.a
CheckoutTest: CMakeFiles/CheckoutTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CheckoutTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CheckoutTest.dir/link.txt --verbose=$(VERBOSE)
	/Applications/CMake.app/Contents/bin/cmake -D TEST_TARGET=CheckoutTest -D TEST_EXECUTABLE=/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/CheckoutTest -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=CheckoutTest_TESTS -D CTEST_FILE=/Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/CheckoutTest[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /Applications/CMake.app/Contents/share/cmake-3.26/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/CheckoutTest.dir/build: CheckoutTest
.PHONY : CMakeFiles/CheckoutTest.dir/build

CMakeFiles/CheckoutTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CheckoutTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CheckoutTest.dir/clean

CMakeFiles/CheckoutTest.dir/depend:
	cd /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build /Users/jean-philippemagido/dev_workspace/challenges-RMD/C++/textmaster/build/CMakeFiles/CheckoutTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CheckoutTest.dir/depend

