#include "SE_Definition.h"
#include "SE_winsock2.h"
#include "login.h"
int main(int argc,char* argv[]){
	SE_winsock2 my_sock;
	if(!my_sock.initialize())
		return -1;
	QApplication a(argc,argv);
	Login w(0);
	w.show();
	return 0;
}