# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jason\Documents\GitHub\SE_Project\Server\Source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang

# Include any dependencies generated for this target.
include CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run.dir/flags.make

CMakeFiles/run.dir/main.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/main.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/main.obj: C:/Users/jason/Documents/GitHub/SE_Project/Server/Source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run.dir/main.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\main.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\main.cpp

CMakeFiles/run.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/main.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\main.cpp > CMakeFiles\run.dir\main.i

CMakeFiles/run.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/main.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\main.cpp -o CMakeFiles\run.dir\main.s

CMakeFiles/run.dir/main.obj.requires:

.PHONY : CMakeFiles/run.dir/main.obj.requires

CMakeFiles/run.dir/main.obj.provides: CMakeFiles/run.dir/main.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/main.obj.provides.build
.PHONY : CMakeFiles/run.dir/main.obj.provides

CMakeFiles/run.dir/main.obj.provides.build: CMakeFiles/run.dir/main.obj


CMakeFiles/run.dir/SE_winsock2.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/SE_winsock2.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/SE_winsock2.obj: C:/Users/jason/Documents/GitHub/SE_Project/Server/Source/SE_winsock2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run.dir/SE_winsock2.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\SE_winsock2.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\SE_winsock2.cpp

CMakeFiles/run.dir/SE_winsock2.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/SE_winsock2.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\SE_winsock2.cpp > CMakeFiles\run.dir\SE_winsock2.i

CMakeFiles/run.dir/SE_winsock2.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/SE_winsock2.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\SE_winsock2.cpp -o CMakeFiles\run.dir\SE_winsock2.s

CMakeFiles/run.dir/SE_winsock2.obj.requires:

.PHONY : CMakeFiles/run.dir/SE_winsock2.obj.requires

CMakeFiles/run.dir/SE_winsock2.obj.provides: CMakeFiles/run.dir/SE_winsock2.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/SE_winsock2.obj.provides.build
.PHONY : CMakeFiles/run.dir/SE_winsock2.obj.provides

CMakeFiles/run.dir/SE_winsock2.obj.provides.build: CMakeFiles/run.dir/SE_winsock2.obj


CMakeFiles/run.dir/Client_thread.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/Client_thread.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/Client_thread.obj: C:/Users/jason/Documents/GitHub/SE_Project/Server/Source/Client_thread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run.dir/Client_thread.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\Client_thread.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\Client_thread.cpp

CMakeFiles/run.dir/Client_thread.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/Client_thread.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\Client_thread.cpp > CMakeFiles\run.dir\Client_thread.i

CMakeFiles/run.dir/Client_thread.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/Client_thread.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\Client_thread.cpp -o CMakeFiles\run.dir\Client_thread.s

CMakeFiles/run.dir/Client_thread.obj.requires:

.PHONY : CMakeFiles/run.dir/Client_thread.obj.requires

CMakeFiles/run.dir/Client_thread.obj.provides: CMakeFiles/run.dir/Client_thread.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/Client_thread.obj.provides.build
.PHONY : CMakeFiles/run.dir/Client_thread.obj.provides

CMakeFiles/run.dir/Client_thread.obj.provides.build: CMakeFiles/run.dir/Client_thread.obj


CMakeFiles/run.dir/SE_MySQL.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/SE_MySQL.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/SE_MySQL.obj: C:/Users/jason/Documents/GitHub/SE_Project/Server/Source/SE_MySQL.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run.dir/SE_MySQL.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\SE_MySQL.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\SE_MySQL.cpp

CMakeFiles/run.dir/SE_MySQL.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/SE_MySQL.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\SE_MySQL.cpp > CMakeFiles\run.dir\SE_MySQL.i

CMakeFiles/run.dir/SE_MySQL.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/SE_MySQL.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Server\Source\SE_MySQL.cpp -o CMakeFiles\run.dir\SE_MySQL.s

CMakeFiles/run.dir/SE_MySQL.obj.requires:

.PHONY : CMakeFiles/run.dir/SE_MySQL.obj.requires

CMakeFiles/run.dir/SE_MySQL.obj.provides: CMakeFiles/run.dir/SE_MySQL.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/SE_MySQL.obj.provides.build
.PHONY : CMakeFiles/run.dir/SE_MySQL.obj.provides

CMakeFiles/run.dir/SE_MySQL.obj.provides.build: CMakeFiles/run.dir/SE_MySQL.obj


# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/main.obj" \
"CMakeFiles/run.dir/SE_winsock2.obj" \
"CMakeFiles/run.dir/Client_thread.obj" \
"CMakeFiles/run.dir/SE_MySQL.obj"

# External object files for target run
run_EXTERNAL_OBJECTS =

run.exe: CMakeFiles/run.dir/main.obj
run.exe: CMakeFiles/run.dir/SE_winsock2.obj
run.exe: CMakeFiles/run.dir/Client_thread.obj
run.exe: CMakeFiles/run.dir/SE_MySQL.obj
run.exe: CMakeFiles/run.dir/build.make
run.exe: C:/Program\ Files\ (x86)/MySQL/MySQL\ Connector\ C\ 6.1/lib/libmysql.lib
run.exe: C:/Program\ Files\ (x86)/MySQL/MySQL\ Connector\ C\ 6.1/lib/vs12/mysqlclient.lib
run.exe: CMakeFiles/run.dir/linklibs.rsp
run.exe: CMakeFiles/run.dir/objects1.rsp
run.exe: CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable run.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run.dir/build: run.exe

.PHONY : CMakeFiles/run.dir/build

CMakeFiles/run.dir/requires: CMakeFiles/run.dir/main.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/SE_winsock2.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/Client_thread.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/SE_MySQL.obj.requires

.PHONY : CMakeFiles/run.dir/requires

CMakeFiles/run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\run.dir\cmake_clean.cmake
.PHONY : CMakeFiles/run.dir/clean

CMakeFiles/run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jason\Documents\GitHub\SE_Project\Server\Source C:\Users\jason\Documents\GitHub\SE_Project\Server\Source C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang C:\Users\jason\Documents\GitHub\SE_Project\Server\Build_Chang\CMakeFiles\run.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run.dir/depend
