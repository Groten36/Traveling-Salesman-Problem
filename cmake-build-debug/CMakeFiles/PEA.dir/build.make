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
CMAKE_COMMAND = /home/magda/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/magda/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7479.33/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/magda/CLionProjects/PEA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/magda/CLionProjects/PEA/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PEA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PEA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PEA.dir/flags.make

CMakeFiles/PEA.dir/main.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PEA.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/main.cpp.o -c /home/magda/CLionProjects/PEA/main.cpp

CMakeFiles/PEA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/main.cpp > CMakeFiles/PEA.dir/main.cpp.i

CMakeFiles/PEA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/main.cpp -o CMakeFiles/PEA.dir/main.cpp.s

CMakeFiles/PEA.dir/BranchBound.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/BranchBound.cpp.o: ../BranchBound.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PEA.dir/BranchBound.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/BranchBound.cpp.o -c /home/magda/CLionProjects/PEA/BranchBound.cpp

CMakeFiles/PEA.dir/BranchBound.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/BranchBound.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/BranchBound.cpp > CMakeFiles/PEA.dir/BranchBound.cpp.i

CMakeFiles/PEA.dir/BranchBound.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/BranchBound.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/BranchBound.cpp -o CMakeFiles/PEA.dir/BranchBound.cpp.s

CMakeFiles/PEA.dir/BruteForce.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/BruteForce.cpp.o: ../BruteForce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PEA.dir/BruteForce.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/BruteForce.cpp.o -c /home/magda/CLionProjects/PEA/BruteForce.cpp

CMakeFiles/PEA.dir/BruteForce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/BruteForce.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/BruteForce.cpp > CMakeFiles/PEA.dir/BruteForce.cpp.i

CMakeFiles/PEA.dir/BruteForce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/BruteForce.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/BruteForce.cpp -o CMakeFiles/PEA.dir/BruteForce.cpp.s

CMakeFiles/PEA.dir/Matrix.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/Matrix.cpp.o: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PEA.dir/Matrix.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/Matrix.cpp.o -c /home/magda/CLionProjects/PEA/Matrix.cpp

CMakeFiles/PEA.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/Matrix.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/Matrix.cpp > CMakeFiles/PEA.dir/Matrix.cpp.i

CMakeFiles/PEA.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/Matrix.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/Matrix.cpp -o CMakeFiles/PEA.dir/Matrix.cpp.s

CMakeFiles/PEA.dir/Menu.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PEA.dir/Menu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/Menu.cpp.o -c /home/magda/CLionProjects/PEA/Menu.cpp

CMakeFiles/PEA.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/Menu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/Menu.cpp > CMakeFiles/PEA.dir/Menu.cpp.i

CMakeFiles/PEA.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/Menu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/Menu.cpp -o CMakeFiles/PEA.dir/Menu.cpp.s

CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.o: ../SimulatedAnnealing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.o -c /home/magda/CLionProjects/PEA/SimulatedAnnealing.cpp

CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/SimulatedAnnealing.cpp > CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.i

CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/SimulatedAnnealing.cpp -o CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.s

CMakeFiles/PEA.dir/TabuSearch.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/TabuSearch.cpp.o: ../TabuSearch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PEA.dir/TabuSearch.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/TabuSearch.cpp.o -c /home/magda/CLionProjects/PEA/TabuSearch.cpp

CMakeFiles/PEA.dir/TabuSearch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/TabuSearch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/TabuSearch.cpp > CMakeFiles/PEA.dir/TabuSearch.cpp.i

CMakeFiles/PEA.dir/TabuSearch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/TabuSearch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/TabuSearch.cpp -o CMakeFiles/PEA.dir/TabuSearch.cpp.s

CMakeFiles/PEA.dir/Timer.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/Timer.cpp.o: ../Timer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PEA.dir/Timer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/Timer.cpp.o -c /home/magda/CLionProjects/PEA/Timer.cpp

CMakeFiles/PEA.dir/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/Timer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/Timer.cpp > CMakeFiles/PEA.dir/Timer.cpp.i

CMakeFiles/PEA.dir/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/Timer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/Timer.cpp -o CMakeFiles/PEA.dir/Timer.cpp.s

CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.o: CMakeFiles/PEA.dir/flags.make
CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.o: ../GeneticAlgorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.o -c /home/magda/CLionProjects/PEA/GeneticAlgorithm.cpp

CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/magda/CLionProjects/PEA/GeneticAlgorithm.cpp > CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.i

CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/magda/CLionProjects/PEA/GeneticAlgorithm.cpp -o CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.s

# Object files for target PEA
PEA_OBJECTS = \
"CMakeFiles/PEA.dir/main.cpp.o" \
"CMakeFiles/PEA.dir/BranchBound.cpp.o" \
"CMakeFiles/PEA.dir/BruteForce.cpp.o" \
"CMakeFiles/PEA.dir/Matrix.cpp.o" \
"CMakeFiles/PEA.dir/Menu.cpp.o" \
"CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.o" \
"CMakeFiles/PEA.dir/TabuSearch.cpp.o" \
"CMakeFiles/PEA.dir/Timer.cpp.o" \
"CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.o"

# External object files for target PEA
PEA_EXTERNAL_OBJECTS =

PEA: CMakeFiles/PEA.dir/main.cpp.o
PEA: CMakeFiles/PEA.dir/BranchBound.cpp.o
PEA: CMakeFiles/PEA.dir/BruteForce.cpp.o
PEA: CMakeFiles/PEA.dir/Matrix.cpp.o
PEA: CMakeFiles/PEA.dir/Menu.cpp.o
PEA: CMakeFiles/PEA.dir/SimulatedAnnealing.cpp.o
PEA: CMakeFiles/PEA.dir/TabuSearch.cpp.o
PEA: CMakeFiles/PEA.dir/Timer.cpp.o
PEA: CMakeFiles/PEA.dir/GeneticAlgorithm.cpp.o
PEA: CMakeFiles/PEA.dir/build.make
PEA: CMakeFiles/PEA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable PEA"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PEA.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PEA.dir/build: PEA

.PHONY : CMakeFiles/PEA.dir/build

CMakeFiles/PEA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PEA.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PEA.dir/clean

CMakeFiles/PEA.dir/depend:
	cd /home/magda/CLionProjects/PEA/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/magda/CLionProjects/PEA /home/magda/CLionProjects/PEA /home/magda/CLionProjects/PEA/cmake-build-debug /home/magda/CLionProjects/PEA/cmake-build-debug /home/magda/CLionProjects/PEA/cmake-build-debug/CMakeFiles/PEA.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PEA.dir/depend

