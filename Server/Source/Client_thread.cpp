#include "Client_thread.h"
#include "SE_winsock2.h"

DWORD WINAPI Thread_Func(void* lpParam){
	SE_winsock2::Client_Service* Client = (SE_winsock2::Client_Service*)lpParam;
	size_t len;
	Client->SE_recv((void*)&len, sizeof(size_t));
	cout<<len<<endl;
	wchar_t text[len];
	Client->SE_recv((void*)text, len*sizeof(wchar_t));
	std::wcout<<text<<endl;
}
