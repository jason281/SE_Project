#include <iostream>
#include "SE_winsock2.h"
using std::cout;
using std::cin;
using std::cerr;
using std::endl;
int main(){
	SE_winsock2 my_sock;
	int n;
	if(!my_sock.initialize()){
		cerr<<"=====Initialize failed=====\n";
		exit(-1);
	}
	else
		cerr<<"=====Initialize succeed=====\n";
	cin>>n;
	return 0;
}
