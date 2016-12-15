#ifndef __SE_WINSOCK2_H__
#define __SE_WINSOCK2_H__

#include "SE_Definition.h"

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
