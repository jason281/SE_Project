#include "SE_Definition.h"
#include "SE_winsock2.h"
#include "login.h"
#include "mainwindow.h"
int main(int argc,char* argv[]){
	SE_winsock2 my_sock;
	//if(!my_sock.initialize(DEFAULT_IP,DEFAULT_PORT))
		//return -1;
	QApplication a(argc,argv);
	Login w(0, &my_sock);
	w.show();
	MainWindow m(0, &my_sock);
	w.setMainWindow(&m);
	return a.exec();
}