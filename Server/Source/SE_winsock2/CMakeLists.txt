if(WIN32)
	TARGET_LINK_LIBRARIES(SE_winsock2 wsock32 ws2_32)
endif()
ADD_LIBRARY(SE_winsock2 SE_winsock2.cpp)