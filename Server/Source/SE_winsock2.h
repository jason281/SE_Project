#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__
#define _WIN32_WINNT 0x501
#include <ws2tcpip.h>
#include <WinSock2.h>
class SE_winsock2{
public:
	SE_winsock2();
	bool initialize();
private:
	WSADATA wsaData;
	struct addrinfo *result;
	struct addrinfo *ptr;
	struct addrinfo hints;
	SOCKET ListenSocket;
};
#endif
