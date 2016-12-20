#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__

#include "SE_Definition.h"
#include "Client_thread.h"
#include "SE_MySQL.h"

class SE_winsock2{
public:
	SE_winsock2(SE_MySQL*);
	bool initialize();
	class Client_Service{
	public:
		friend DWORD WINAPI Thread_Func(void*);
		friend bool login(SE_winsock2::Client_Service* ,SE_MySQL*);
		Client_Service(SOCKET,SOCKADDR_IN,SE_MySQL*);
		bool SE_send(void*, size_t);
		bool SE_recv(void*, size_t);
	private:
		SOCKET Client_Socket;
		SOCKADDR_IN Client_addr;
		HANDLE thread;
		SE_MySQL* database;
		Client_Info info;
	};
private:
	WSADATA wsaData;
	SOCKET ListenSocket;
	SOCKADDR_IN addr;
	std::vector<Client_Service*> Client_List;
	SE_MySQL* database;
};
class thread_par{
public:
	thread_par(SE_winsock2::Client_Service* sock_, SE_MySQL* db):sock(sock_),database(db){};
	SE_winsock2::Client_Service* sock;
	SE_MySQL* database;
};
#endif
