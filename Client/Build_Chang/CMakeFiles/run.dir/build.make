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
CMAKE_SOURCE_DIR = C:\Users\jason\Documents\GitHub\SE_Project\Client\Source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang

# Include any dependencies generated for this target.
include CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run.dir/flags.make

CMakeFiles/run.dir/main.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/main.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/main.obj: C:/Users/jason/Documents/GitHub/SE_Project/Client/Source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run.dir/main.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\main.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\main.cpp

CMakeFiles/run.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/main.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\main.cpp > CMakeFiles\run.dir\main.i

CMakeFiles/run.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/main.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\main.cpp -o CMakeFiles\run.dir\main.s

CMakeFiles/run.dir/main.obj.requires:

.PHONY : CMakeFiles/run.dir/main.obj.requires

CMakeFiles/run.dir/main.obj.provides: CMakeFiles/run.dir/main.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/main.obj.provides.build
.PHONY : CMakeFiles/run.dir/main.obj.provides

CMakeFiles/run.dir/main.obj.provides.build: CMakeFiles/run.dir/main.obj


CMakeFiles/run.dir/SE_winsock2.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/SE_winsock2.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/SE_winsock2.obj: C:/Users/jason/Documents/GitHub/SE_Project/Client/Source/SE_winsock2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run.dir/SE_winsock2.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\SE_winsock2.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\SE_winsock2.cpp

CMakeFiles/run.dir/SE_winsock2.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/SE_winsock2.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\SE_winsock2.cpp > CMakeFiles\run.dir\SE_winsock2.i

CMakeFiles/run.dir/SE_winsock2.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/SE_winsock2.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\SE_winsock2.cpp -o CMakeFiles\run.dir\SE_winsock2.s

CMakeFiles/run.dir/SE_winsock2.obj.requires:

.PHONY : CMakeFiles/run.dir/SE_winsock2.obj.requires

CMakeFiles/run.dir/SE_winsock2.obj.provides: CMakeFiles/run.dir/SE_winsock2.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/SE_winsock2.obj.provides.build
.PHONY : CMakeFiles/run.dir/SE_winsock2.obj.provides

CMakeFiles/run.dir/SE_winsock2.obj.provides.build: CMakeFiles/run.dir/SE_winsock2.obj


CMakeFiles/run.dir/login.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/login.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/login.obj: C:/Users/jason/Documents/GitHub/SE_Project/Client/Source/login.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run.dir/login.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\login.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\login.cpp

CMakeFiles/run.dir/login.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/login.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\login.cpp > CMakeFiles\run.dir\login.i

CMakeFiles/run.dir/login.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/login.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\login.cpp -o CMakeFiles\run.dir\login.s

CMakeFiles/run.dir/login.obj.requires:

.PHONY : CMakeFiles/run.dir/login.obj.requires

CMakeFiles/run.dir/login.obj.provides: CMakeFiles/run.dir/login.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/login.obj.provides.build
.PHONY : CMakeFiles/run.dir/login.obj.provides

CMakeFiles/run.dir/login.obj.provides.build: CMakeFiles/run.dir/login.obj


CMakeFiles/run.dir/mainwindow.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/mainwindow.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/mainwindow.obj: C:/Users/jason/Documents/GitHub/SE_Project/Client/Source/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run.dir/mainwindow.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\mainwindow.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\mainwindow.cpp

CMakeFiles/run.dir/mainwindow.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/mainwindow.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\mainwindow.cpp > CMakeFiles\run.dir\mainwindow.i

CMakeFiles/run.dir/mainwindow.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/mainwindow.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\mainwindow.cpp -o CMakeFiles\run.dir\mainwindow.s

CMakeFiles/run.dir/mainwindow.obj.requires:

.PHONY : CMakeFiles/run.dir/mainwindow.obj.requires

CMakeFiles/run.dir/mainwindow.obj.provides: CMakeFiles/run.dir/mainwindow.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/mainwindow.obj.provides.build
.PHONY : CMakeFiles/run.dir/mainwindow.obj.provides

CMakeFiles/run.dir/mainwindow.obj.provides.build: CMakeFiles/run.dir/mainwindow.obj


CMakeFiles/run.dir/setting.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/setting.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/setting.obj: C:/Users/jason/Documents/GitHub/SE_Project/Client/Source/setting.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/run.dir/setting.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\setting.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\setting.cpp

CMakeFiles/run.dir/setting.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/setting.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\setting.cpp > CMakeFiles\run.dir\setting.i

CMakeFiles/run.dir/setting.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/setting.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\setting.cpp -o CMakeFiles\run.dir\setting.s

CMakeFiles/run.dir/setting.obj.requires:

.PHONY : CMakeFiles/run.dir/setting.obj.requires

CMakeFiles/run.dir/setting.obj.provides: CMakeFiles/run.dir/setting.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/setting.obj.provides.build
.PHONY : CMakeFiles/run.dir/setting.obj.provides

CMakeFiles/run.dir/setting.obj.provides.build: CMakeFiles/run.dir/setting.obj


CMakeFiles/run.dir/add.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/add.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/add.obj: C:/Users/jason/Documents/GitHub/SE_Project/Client/Source/add.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/run.dir/add.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\add.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\add.cpp

CMakeFiles/run.dir/add.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/add.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\add.cpp > CMakeFiles\run.dir\add.i

CMakeFiles/run.dir/add.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/add.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Source\add.cpp -o CMakeFiles\run.dir\add.s

CMakeFiles/run.dir/add.obj.requires:

.PHONY : CMakeFiles/run.dir/add.obj.requires

CMakeFiles/run.dir/add.obj.provides: CMakeFiles/run.dir/add.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/add.obj.provides.build
.PHONY : CMakeFiles/run.dir/add.obj.provides

CMakeFiles/run.dir/add.obj.provides.build: CMakeFiles/run.dir/add.obj


CMakeFiles/run.dir/run_automoc.obj: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/run_automoc.obj: CMakeFiles/run.dir/includes_CXX.rsp
CMakeFiles/run.dir/run_automoc.obj: run_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/run.dir/run_automoc.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\run.dir\run_automoc.obj -c C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\run_automoc.cpp

CMakeFiles/run.dir/run_automoc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/run_automoc.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\run_automoc.cpp > CMakeFiles\run.dir\run_automoc.i

CMakeFiles/run.dir/run_automoc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/run_automoc.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\run_automoc.cpp -o CMakeFiles\run.dir\run_automoc.s

CMakeFiles/run.dir/run_automoc.obj.requires:

.PHONY : CMakeFiles/run.dir/run_automoc.obj.requires

CMakeFiles/run.dir/run_automoc.obj.provides: CMakeFiles/run.dir/run_automoc.obj.requires
	$(MAKE) -f CMakeFiles\run.dir\build.make CMakeFiles/run.dir/run_automoc.obj.provides.build
.PHONY : CMakeFiles/run.dir/run_automoc.obj.provides

CMakeFiles/run.dir/run_automoc.obj.provides.build: CMakeFiles/run.dir/run_automoc.obj


# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/main.obj" \
"CMakeFiles/run.dir/SE_winsock2.obj" \
"CMakeFiles/run.dir/login.obj" \
"CMakeFiles/run.dir/mainwindow.obj" \
"CMakeFiles/run.dir/setting.obj" \
"CMakeFiles/run.dir/add.obj" \
"CMakeFiles/run.dir/run_automoc.obj"

# External object files for target run
run_EXTERNAL_OBJECTS =

run.exe: CMakeFiles/run.dir/main.obj
run.exe: CMakeFiles/run.dir/SE_winsock2.obj
run.exe: CMakeFiles/run.dir/login.obj
run.exe: CMakeFiles/run.dir/mainwindow.obj
run.exe: CMakeFiles/run.dir/setting.obj
run.exe: CMakeFiles/run.dir/add.obj
run.exe: CMakeFiles/run.dir/run_automoc.obj
run.exe: CMakeFiles/run.dir/build.make
run.exe: C:/Qt/5.7/mingw53_32/lib/libQt5Widgets.a
run.exe: C:/Qt/5.7/mingw53_32/lib/libQt5Gui.a
run.exe: C:/Qt/5.7/mingw53_32/lib/libQt5Core.a
run.exe: CMakeFiles/run.dir/linklibs.rsp
run.exe: CMakeFiles/run.dir/objects1.rsp
run.exe: CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable run.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run.dir/build: run.exe

.PHONY : CMakeFiles/run.dir/build

CMakeFiles/run.dir/requires: CMakeFiles/run.dir/main.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/SE_winsock2.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/login.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/mainwindow.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/setting.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/add.obj.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/run_automoc.obj.requires

.PHONY : CMakeFiles/run.dir/requires

CMakeFiles/run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\run.dir\cmake_clean.cmake
.PHONY : CMakeFiles/run.dir/clean

CMakeFiles/run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jason\Documents\GitHub\SE_Project\Client\Source C:\Users\jason\Documents\GitHub\SE_Project\Client\Source C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang C:\Users\jason\Documents\GitHub\SE_Project\Client\Build_Chang\CMakeFiles\run.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run.dir/depend

