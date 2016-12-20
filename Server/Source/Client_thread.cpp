#include "Client_thread.h"
bool login(SE_winsock2::Client_Service* Client,SE_MySQL* database){
	while(1){
		size_t len;
		Client->SE_recv((void*)&len, sizeof(size_t));
		cout<<"Recv len:"<<len<<endl;
		wchar_t text[len];
		Client->SE_recv((void*)text, len*sizeof(wchar_t));
		
		wstring q(text);
		string t=string(q.begin(),q.end());
		strcpy(Client->info.ID, t.c_str());
		q=L"SELECT Passwd FROM se_database.employee WHERE ID = '"+q+L"'";
		database->query(q);
		//wcout<<q<<endl;
		vector<MYSQL_ROW> result=database->retrive();
		//cout<<result[0][0]<<endl;
		
		Client->SE_recv((void*)&len, sizeof(size_t));
		//cout<<"Passwd len:"<<len<<endl;
		wchar_t passwd_r[len];
		Client->SE_recv((void*)passwd_r, len*sizeof(wchar_t));
		wstring temp(passwd_r);
		string temp2(temp.begin(),temp.end());
		
		if(result.size()){
			if(!strcmp(result[0][0],temp2.c_str())){
				wcout<<L"User "<<text<<L" login succeed!\n";
				break;
			}
		}
		else
			cout<<"No Passwd\n";
		short status=0; //for login failed
		Client->SE_send(&status, sizeof(short));
	}
	short status=1; //for login succeed
	Client->SE_send(&status, sizeof(short));
	//get client info
	Client->info=database->get_Info(string(Client->info.ID));
	
	return true;
}

DWORD WINAPI Thread_Func(void* lpParam){
	thread_par* par= (thread_par*)lpParam;
	SE_winsock2::Client_Service* Client = par->sock;
	SE_MySQL* database = par->database;
	short operation;
	while(1){
		operation=0;
		Client->SE_recv(&operation,sizeof(short));
		cout<<"Operation : "<<operation<<endl;
		if(operation==0)							//0 : Leave
			return 0;
		else if(operation==1){						//1 : Login
			if(!login(Client,database)){
				return 1;
			}
		}
		else if(operation==2){						//2 : Retrive Client Information
			Client->SE_send(&Client->info,sizeof(Client_Info));
		}
		else if(operation==3){						//3 : Modify personal information
			Client->SE_recv(&Client->info,sizeof(Client_Info));
			string query("UPDATE se_database.employee SET ");
			if(strcmp("",Client->info.Emp_Name))
				query=query+"Emp_Name = '"+Client->info.Emp_Name+"',";
			if(strcmp("",Client->info.branch))
			query=query+"branch = '"+Client->info.branch+"',";
			query=query+"Gender = "+string(1,Client->info.Gender+48);
			query=query+" WHERE ID = '"+Client->info.ID+"';";
			database->query(query);
		}
	}
}
