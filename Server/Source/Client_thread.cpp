#include "Client_thread.h"
bool login(SE_winsock2::Client_Service* Client,SE_MySQL* database){
	while(1){
		size_t len;
		Client->SE_recv((void*)&len, sizeof(size_t));
		wchar_t text[len];
		Client->SE_recv((void*)text, len*sizeof(wchar_t));
		
		wstring q(L"SELECT Passwd FROM se_database.employee WHERE ID = '");
		q=q+text+L"'";
		database->query(q);
		//wcout<<q<<endl;
		vector<MYSQL_ROW> result=database->retrive();
		char* passwd=result[0][0];
		//cout<<result[0][0]<<endl;
		
		Client->SE_recv((void*)&len, sizeof(size_t));
		wchar_t passwd_r[len];
		Client->SE_recv((void*)passwd_r, len*sizeof(wchar_t));
		wstring temp(passwd_r);
		string temp2(temp.begin(),temp.end());
		
		if(!strcmp(passwd,temp2.c_str())){
			wcout<<L"User "<<text<<L" login succeed!\n";
			break;
		}
	}
	return true;
}

DWORD WINAPI Thread_Func(void* lpParam){
	thread_par* par= (thread_par*)lpParam;
	SE_winsock2::Client_Service* Client = par->sock;
	SE_MySQL* database = par->database;
	if(!login(Client,database)){
		return 0;
	}
}
