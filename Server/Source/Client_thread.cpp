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
void insert_record(SE_winsock2::Client_Service* Client,SE_MySQL* database){
	Record r;
	Client->SE_recv(&r,sizeof(Record));
	r.ID= ++database->record_ID;
	string query("INSERT INTO se_database.record VALUES(");
	query=query+std::to_string(r.ID)+",'"+r.applied_ID+"',"+std::to_string(r.r_type)+",'";
	query=query+std::to_string(r.start.tm_year+1900)+"-"+std::to_string(r.start.tm_mon+1)+"-"+std::to_string(r.start.tm_mday)+" "+std::to_string(r.start.tm_hour)+":"+std::to_string(r.start.tm_min)+":"+std::to_string(r.start.tm_sec)+"','";
	query=query+std::to_string(r.end.tm_year+1900)+"-"+std::to_string(r.end.tm_mon+1)+"-"+std::to_string(r.end.tm_mday)+" "+std::to_string(r.end.tm_hour)+":"+std::to_string(r.end.tm_min)+":"+std::to_string(r.end.tm_sec)+"','";
	query=query+r.reason+"','"+r.ps+"','";
	query=query+std::to_string(r.now.tm_year+1900)+"-"+std::to_string(r.now.tm_mon+1)+"-"+std::to_string(r.now.tm_mday)+" "+std::to_string(r.now.tm_hour)+":"+std::to_string(r.now.tm_min)+":"+std::to_string(r.now.tm_sec)+"',";
	query=query+std::to_string(r.r_status)+");";
	cout<<query<<endl;
	database->query(query);
}
void record_query(SE_winsock2::Client_Service* Client,SE_MySQL* database,const char* query_ID){
	string query("SELECT COUNT(*) FROM se_database.record WHERE applier_ID = '");
	query=query+query_ID+"';";
	database->query(query);
	vector<MYSQL_ROW> result=database->retrive();
	int count=strtol(result[0][0],NULL,10);
	Client->SE_send(&count,sizeof(int));
	query=string("SELECT * FROM se_database.record WHERE applier_ID = '");
	query=query+query_ID+"';";
	database->query(query);
	result=database->retrive();
	for(int i=0;i<count;i++){
		Record r;
		r.ID=strtol(result.at(i)[0],NULL,10);
		strcpy(r.applied_ID,result.at(i)[1]);
		r.r_type=strtol(result.at(i)[2],NULL,10);
		r.start.tm_year =strtol(strtok(result.at(i)[3]," -:"),NULL,10)-1900;
		r.start.tm_mon  =strtol(strtok(NULL," -:"),NULL,10)-1;
		r.start.tm_mday =strtol(strtok(NULL," -:"),NULL,10);
		r.start.tm_hour =strtol(strtok(NULL," -:"),NULL,10);
		r.start.tm_min  =strtol(strtok(NULL," -:"),NULL,10);
		r.start.tm_sec  =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_year =strtol(strtok(result.at(i)[4]," -:"),NULL,10)-1900;
		r.end.tm_mon  =strtol(strtok(NULL," -:"),NULL,10)-1;
		r.end.tm_mday =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_hour =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_min  =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_sec  =strtol(strtok(NULL," -:"),NULL,10);
		strcpy(r.reason,result.at(i)[5]);
		strcpy(r.ps    ,result.at(i)[6]);
		r.now.tm_year =strtol(strtok(result.at(i)[7]," -:"),NULL,10)-1900;
		r.now.tm_mon  =strtol(strtok(NULL," -:"),NULL,10)-1;
		r.now.tm_mday =strtol(strtok(NULL," -:"),NULL,10);
		r.now.tm_hour =strtol(strtok(NULL," -:"),NULL,10);
		r.now.tm_min  =strtol(strtok(NULL," -:"),NULL,10);
		r.now.tm_sec  =strtol(strtok(NULL," -:"),NULL,10);
		r.r_status=strtol(result.at(i)[8],NULL,10);
		Client->SE_send(&r,sizeof(Record));
	}
}
void query_pending_record(SE_winsock2::Client_Service* Client,SE_MySQL* database){
	string query("SELECT COUNT(*) FROM se_database.record WHERE r_status = 1;");
	database->query(query);
	vector<MYSQL_ROW> result=database->retrive();
	int count=strtol(result[0][0],NULL,10);
	Client->SE_send(&count,sizeof(int));
	query=string("SELECT * FROM se_database.record WHERE r_status = 1;");
	database->query(query);
	result=database->retrive();
	for(int i=0;i<count;i++){
		Record r;
		r.ID=strtol(result.at(i)[0],NULL,10);
		strcpy(r.applied_ID,result.at(i)[1]);
		r.r_type=strtol(result.at(i)[2],NULL,10);
		r.start.tm_year =strtol(strtok(result.at(i)[3]," -:"),NULL,10)-1900;
		r.start.tm_mon  =strtol(strtok(NULL," -:"),NULL,10)-1;
		r.start.tm_mday =strtol(strtok(NULL," -:"),NULL,10);
		r.start.tm_hour =strtol(strtok(NULL," -:"),NULL,10);
		r.start.tm_min  =strtol(strtok(NULL," -:"),NULL,10);
		r.start.tm_sec  =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_year =strtol(strtok(result.at(i)[4]," -:"),NULL,10)-1900;
		r.end.tm_mon  =strtol(strtok(NULL," -:"),NULL,10)-1;
		r.end.tm_mday =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_hour =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_min  =strtol(strtok(NULL," -:"),NULL,10);
		r.end.tm_sec  =strtol(strtok(NULL," -:"),NULL,10);
		strcpy(r.reason,result.at(i)[5]);
		strcpy(r.ps    ,result.at(i)[6]);
		r.now.tm_year =strtol(strtok(result.at(i)[7]," -:"),NULL,10)-1900;
		r.now.tm_mon  =strtol(strtok(NULL," -:"),NULL,10)-1;
		r.now.tm_mday =strtol(strtok(NULL," -:"),NULL,10);
		r.now.tm_hour =strtol(strtok(NULL," -:"),NULL,10);
		r.now.tm_min  =strtol(strtok(NULL," -:"),NULL,10);
		r.now.tm_sec  =strtol(strtok(NULL," -:"),NULL,10);
		r.r_status=strtol(result.at(i)[8],NULL,10);
		Client->SE_send(&r,sizeof(Record));
	}
}
void modify_status(SE_MySQL* database,const int RID,const int goal_status,const char* Client_ID){
	string query("SELECT * FROM se_database.record WHERE ID = ");
	query=query+std::to_string(RID)+";";
	database->query(query);
	MYSQL_ROW result=database->retrive().at(0);
	if(strcmp(result[8],"1"))
		return;						//modification invalid
	if(goal_status==2 && strcmp(result[1],Client_ID))
		return;						//permision denied
	query=string("UPDATE se_database.record SET r_status = ");
	query=query+std::to_string(goal_status)+" WHERE ID = "+std::to_string(RID)+";";
	database->query(query);
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
		else if(operation==4){						//4 : Record the application
			insert_record(Client,database);
		}
		else if(operation==5){						//5 : Query all record by Client
			record_query(Client,database,Client->info.ID);
		}
		else if(operation==6){						//6 : cancellation
			int RID;
			Client->SE_recv(&RID,sizeof(int));
			modify_status(database,RID,2,Client->info.ID);
		}
		else if(operation==7){						//7 : query pending record
			query_pending_record(Client,database);
		}
		else if(operation==8){						//8 : approval
			int RID;
			Client->SE_recv(&RID,sizeof(int));
			if(Client->info.Emp_position==1||Client->info.Emp_position==2)
				modify_status(database,RID,4,Client->info.ID);
		}
		else if(operation==9){						//9 : rejection
			int RID;
			Client->SE_recv(&RID,sizeof(int));
			if(Client->info.Emp_position==1||Client->info.Emp_position==2)
				modify_status(database,RID,3,Client->info.ID);
		}
	}
}
