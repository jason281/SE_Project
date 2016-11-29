#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x501
#endif

#include <ws2tcpip.h>
#include <WinSock2.h>
#include <windows.h>
#include <vector>
#include "Client_thread.h"
class SE_winsock2{
public:
	SE_winsock2();
	bool initialize();
	class my_Socket{
	public:
		my_Socket(SOCKET);
	private:
		SOCKET socket;
		HANDLE handle;
	};
private:
	WSADATA wsaData;
	struct addrinfo *result;
	struct addrinfo *ptr;
	struct addrinfo hints;
	SOCKET ListenSocket;
	std::vector<my_Socket> Connect_list;
};
#endif
