#include <iostream>
#include <windows.h>
#include "SE_winsock2.h"
#define DEFAULT_PORT "27015"
using std::cerr;
using std::endl;
SE_winsock2::SE_winsock2():result(NULL),ptr(NULL){
	ZeroMemory( &hints, sizeof(hints) );
	hints.ai_family = AF_UNSPEC;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	ListenSocket = INVALID_SOCKET;
}
bool SE_winsock2::initialize(){
	int iResult;
	while(iResult=WSAStartup(MAKEWORD(2,2), &wsaData)){
		cerr<<"WSAStartup failed: "<<iResult<<endl;
		Sleep(1000);
	}
	std::cerr<<"WSAStartup succeed\n";
	if (iResult=getaddrinfo(NULL, DEFAULT_PORT, &hints, &result)) {
	    cerr<<"getaddrinfo failed: "<<iResult<<endl;
	    WSACleanup();
	    return false;
	}
	std::cerr<<"getaddrinfo succeed\n";
	ListenSocket = socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == INVALID_SOCKET) {
		cerr<<"Error at socket(): "<<WSAGetLastError()<<endl;
		freeaddrinfo(result);
		WSACleanup();
		return false;
	}
	return true;
}
