#include "SE_winsock2.h"

SE_winsock2::SE_winsock2(SE_MySQL* db):database(db){
	addr.sin_addr.s_addr = INADDR_ANY;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(DEFAULT_PORT);
	ListenSocket = INVALID_SOCKET;
}
bool SE_winsock2::initialize(){
	int iResult;
	while(iResult=WSAStartup(MAKEWORD(2,2), &wsaData)){
		cerr<<"WSAStartup failed: "<<iResult<<endl;
		return false;
	}
	std::cerr<<"WSAStartup succeed\n";
	ListenSocket = socket(AF_INET,SOCK_STREAM,NULL);
	if (ListenSocket == INVALID_SOCKET) {
		cerr<<"Error at socket(): "<<WSAGetLastError()<<endl;
		WSACleanup();
		return false;
	}
	std::cerr<<"ListenSocket create succeed\n";
	iResult = bind( ListenSocket,(SOCKADDR*)&addr, sizeof(addr));
    if (iResult == SOCKET_ERROR) {
        cerr<<"bind failed with error: "<< WSAGetLastError()<<endl;
        closesocket(ListenSocket);
        WSACleanup();
        return false;
    };
    std::cerr<<"Bind succeed\n";
    if ( listen( ListenSocket, SOMAXCONN ) == SOCKET_ERROR ) {
	    cerr<<"Listen failed with error: "<< WSAGetLastError()<<endl;
	    closesocket(ListenSocket);
	    WSACleanup();
	    return false;
	}
	std::cerr<<"Start Listening...\n";
	
	SOCKET ClientSocket = INVALID_SOCKET;
	SOCKADDR_IN Client_addr;
	int addr_size=sizeof(Client_addr);
	while(1){
		cerr<<"Waiting for client to connect...\n";
		if ( ClientSocket = accept(ListenSocket, (SOCKADDR*)&Client_addr, &addr_size) ) {
			cerr<<"got connection from "<<inet_ntoa(Client_addr.sin_addr)<<endl;
			Client_List.push_back(new Client_Service(ClientSocket,Client_addr,database));
		}
		else{
		    cerr<<"accept failed: "<< WSAGetLastError()<<endl;
		    closesocket(ListenSocket);
		    WSACleanup();
		    return false;
		}
	}
	return true;
}
SE_winsock2::Client_Service::Client_Service(SOCKET sock, SOCKADDR_IN addr,SE_MySQL* db):Client_Socket(sock),Client_addr(addr),database(db){
	thread = CreateThread(NULL,0,Thread_Func,new thread_par(this,db),0,NULL);
}
bool SE_winsock2::Client_Service::SE_send(void* buf, size_t len){
	int nLeft=len;
	int idx=0, ret;
	char* cbuf=(char*)buf;
	while(nLeft > 0){
		ret = send(Client_Socket, &cbuf[idx], nLeft, 0);
		if(ret == SOCKET_ERROR){
			cerr<<"Send "<<idx<<" Error\n";
			return false;
		}
		nLeft -= ret;
		idx += ret;
	}
	return true;
}
bool SE_winsock2::Client_Service::SE_recv(void* buf, size_t len){
	int nLeft=len;
	int idx=0, ret;
	char* cbuf=(char*)buf;
	while(nLeft > 0){
		ret = recv(Client_Socket, &cbuf[idx], nLeft, 0);
		if(ret == SOCKET_ERROR){
			cerr<<"Recv "<<idx<<" Error\n";
			return false;
		}
		nLeft -= ret;
		idx += ret;
	}
	return true;
}