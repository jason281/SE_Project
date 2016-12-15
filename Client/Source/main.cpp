#include <iostream>
#include "SE_winsock2.h"
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
int main(){
	SE_winsock2 my_sock;
	if(!my_sock.initialize())
		exit(-1);
	cin.get();
	return 0;
}
