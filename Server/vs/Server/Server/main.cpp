#define WIN32_LEAN_AND_MEAN
#define _WINSOCKAPI_
#include "SE_Definition.h"
#include "SE_winsock2.h"
#include "SE_MySQL.h"


int main(){
	SE_winsock2 my_sock;
	if(!my_sock.initialize())
		exit(-1);
	cin.get();
	return 0;
}
