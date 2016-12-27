//#define _WINSOCKAPI_
#include "SE_Definition.h"
#include "SE_winsock2.h"
#include "SE_MySQL.h"
vector<in_addr> SE_winsock2::Client_Service::black_list;
int main(){
	SE_MySQL database;
	cout<<"Do you want to format the database(Y/N):";
	char option;
	cin.get(option);
	if(option=='y' || option=='Y')
		database.format();
	database.initialize();
	SE_winsock2 my_sock(&database);
	if(!my_sock.initialize())
		exit(-1);
	cin.get();
	return 0;
}