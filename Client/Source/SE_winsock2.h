#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x501
#endif

#include <ws2tcpip.h>
#include <WinSock2.h>
#include <windows.h>
#include <vector>
class SE_winsock2{
public:
	SE_winsock2();
	bool initialize();
private:
	WSADATA wsaData;
	SOCKADDR_IN ServerAddr; 
	SOCKET ConnectSocket;
};
#endif
