#include "SE_Definition.h"
#include "SE_winsock2.h"
SE_winsock2::SE_winsock2(){
}
bool SE_winsock2::initialize(const char* server_addr=DEFAULT_IP,int server_port=DEFAULT_PORT){
	ServerAddr.sin_family = AF_INET;
	ServerAddr.sin_port = htons(server_port);
	ServerAddr.sin_addr.s_addr = inet_addr(server_addr);
	ConnectSocket = INVALID_SOCKET;
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
bool SE_winsock2::SE_send(void* buf, size_t len){
	int nLeft=len;
	int idx=0, ret;
	char* cbuf=(char*)buf;
	while(nLeft > 0){
		ret = send(ConnectSocket, &cbuf[idx], nLeft, 0);
		if(ret == SOCKET_ERROR){
			cerr<<"Send "<<idx<<" Error\n";
			return false;
		}
		nLeft -= ret;
		idx += ret;
	}
	return true;
}
bool SE_winsock2::SE_recv(void* buf, size_t len){
	int nLeft=len;
	int idx=0, ret;
	char* cbuf=(char*)buf;
	while(nLeft > 0){
		ret = recv(ConnectSocket, &cbuf[idx], nLeft, 0);
		if(ret == SOCKET_ERROR){
			cerr<<"Recv "<<idx<<" Error\n";
			return false;
		}
		nLeft -= ret;
		idx += ret;
	}
	return true;
}