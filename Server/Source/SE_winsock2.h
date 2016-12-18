#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__

#include "SE_Definition.h"
#include "Client_thread.h"
class SE_winsock2{
public:
	SE_winsock2();
	bool initialize();
	class Client_Service{
	public:
		Client_Service(SOCKET,SOCKADDR_IN);
		bool SE_send(void*, size_t);
		bool SE_recv(void*, size_t);
	private:
		SOCKET Client_Socket;
		SOCKADDR_IN Client_addr;
		HANDLE thread;
	};
private:
	WSADATA wsaData;
	SOCKET ListenSocket;
	SOCKADDR_IN addr;
	std::vector<Client_Service*> Client_List;
};
#endif
