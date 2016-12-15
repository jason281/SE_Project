#include "SE_winsock2.h"
#include "SE_Definition.h"

SE_winsock2::SE_winsock2(){
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
			Client_Socket_List.push_back(ClientSocket);
			Client_Thread_List.push_back(CreateThread(NULL,0,Thread_Func,NULL,0,NULL));
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
