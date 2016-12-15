#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__

#include "SE_Definition.h"
#include "Client_thread.h"
class SE_winsock2{
public:
	SE_winsock2();
	bool initialize();
private:
	WSADATA wsaData;
	SOCKET ListenSocket;
	SOCKADDR_IN addr;
	std::vector<SOCKET> Client_Socket_List;
	std::vector<HANDLE> Client_Thread_List;
};
#endif
