#ifndef __SE_DEFINITION_H__
#define __SE_DEFINITION_H__

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x501
#endif
#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
//#include <my_global.h>
#include <mysql.h>
#include <iostream>
#include <vector>
#define DEFAULT_PORT 99
using std::cout;
using std::cerr;
using std::cin;
using std::endl;

#endif