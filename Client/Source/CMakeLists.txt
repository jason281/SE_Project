CMAKE_MINIMUM_REQUIRED(VERSION 2.4)
PROJECT(SE_Client)

if(COMMAND cmake_policy)
cmake_policy(SET CMP0003 NEW)
cmake_policy(SET CMP0020 NEW)
endif(COMMAND cmake_policy)

#Qt
SET(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets)
find_package(Qt5Core)
#Qt

ADD_EXECUTABLE(run main.cpp SE_winsock2.cpp login.cpp mainwindow.cpp setting.cpp)
if(WIN32)
	TARGET_LINK_LIBRARIES(run wsock32 ws2_32)
endif()
TARGET_LINK_LIBRARIES(run Qt5::Widgets)
TARGET_LINK_LIBRARIES(run Qt5::Core)
