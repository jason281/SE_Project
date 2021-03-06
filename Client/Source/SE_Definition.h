#ifndef __SE_DEFINITION_H__
#define __SE_DEFINITION_H__

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x501
#endif
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <QApplication>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#define DEFAULT_IP "127.0.0.1"
#define DEFAULT_PORT 99

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::vector;

struct Client_Info{
	char ID[256];
	short Emp_position;
	short Default_time;
	char Emp_Name[256];
	short Gender;
	char branch[256];
};
struct Record{
	int ID;
	char applied_ID[256];
	short r_type;
	struct tm start;
	struct tm end;
	char reason[2048];
	char ps[2048];
	struct tm now;
	short r_status;
};

#endif