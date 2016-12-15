#include <iostream>
#include "SE_winsock2.h"
#define DEFAULT_IP "127.0.0.1"
#define DEFAULT_PORT 99
using std::cerr;
using std::endl;
SE_winsock2::SE_winsock2(){
	ServerAddr.sin_family = AF_INET;
	ServerAddr.sin_port = htons(DEFAULT_PORT);
	ServerAddr.sin_addr.s_addr = inet_addr(DEFAULT_IP);
	ConnectSocket = INVALID_SOCKET;
}
bool SE_winsock2::initialize(){
	int iResult;
	while(iResult=WSAStartup(MAKEWORD(2,2), &wsaData)){
		cerr<<"WSAStartup failed: "<<iResult<<endl;
		return false;
	}
	std::cerr<<"WSAStartup succeed\n";
	ConnectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (ConnectSocket == INVALID_SOCKET) {
		cerr<<"Error at socket(): "<<WSAGetLastError()<<endl;
		WSACleanup();
		return false;
	}
	std::cerr<<"ConnectSocket create succeed\n";
	iResult = connect( ConnectSocket, (SOCKADDR*)&ServerAddr, sizeof(ServerAddr) );
	if (iResult == SOCKET_ERROR) {
	    closesocket(ConnectSocket);
	    ConnectSocket = INVALID_SOCKET;
	}
	if (ConnectSocket == INVALID_SOCKET) {
	    cerr<<"Unable to connect to server!\n";
	    WSACleanup();
	    return false;
	}
	cerr<<"Connected Suceed\n";
	return true;
}
