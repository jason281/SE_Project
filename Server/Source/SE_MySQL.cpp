#include "SE_MySQL.h"

SE_MySQL::SE_MySQL(){
	con =  mysql_init(NULL);
	if (con == NULL) 
	{
		cerr<< mysql_error(con) <<endl;
		return;
	}
	cerr << "Database initial succeed" << endl;
	if (mysql_real_connect(con, "localhost", MYSQL_USER_NAME , MYSQL_PASSWORD, NULL, 0, NULL, 0) == NULL) 
	{
		cerr << mysql_error(con) << endl;
		mysql_close(con);
		return;
	}
	cerr << "Database login succeed" << endl;
}
void SE_MySQL::initialize(){
	query(string("SELECT MAX(ID) FROM se_database.record;"));
	vector<MYSQL_ROW> result=retrive();
	if(result[0][0]==NULL)
		record_ID=0;
	else
		record_ID=atoi(result[0][0]);
	cout<<"Record_ID: "<<record_ID<<endl;
}
void SE_MySQL::query(string text){
	if(mysql_query(con,text.c_str()))
		cerr << mysql_error(con) << endl;
}
void SE_MySQL::query(wstring text){
	string s(text.begin(),text.end());
	if(mysql_query(con,s.c_str()))
		cerr << mysql_error(con) << endl;
}
void SE_MySQL::format(){
	query("DROP DATABASE IF EXISTS se_database;");
	query("CREATE DATABASE se_database;");
	query("USE se_database;");
	query(string("CREATE TABLE employee(")+
				"ID char(255) NOT NULL UNIQUE,"+
				"Passwd char(255) NOT NULL,"
				"Emp_Position int NOT NULL,"+
				"Default_time int NOT NULL,"+
				"Emp_Name text,"+
				"Gender bool,"+
				"branch text);");
	query(string("CREATE TABLE record(")+
				"ID int NOT NULL UNIQUE,"+
				"applier_ID char(255) NOT NULL,"
				"r_type int,"+
				"start_time DATETIME,"+
				"end_time DATETIME,"+
				"reason text,"+
				"ps text,"+
				"applied_time DATETIME,"+
				"r_status int);");
	query("INSERT INTO employee VALUES('A001','00000000',1,3,NULL,NULL,NULL);");
	query("INSERT INTO employee VALUES('A002','00000000',2,1,NULL,NULL,NULL);");
	query("INSERT INTO employee VALUES('A003','00000000',2,2,NULL,NULL,NULL);");
	for(int i=4;i<14;i++)
		query("INSERT INTO employee VALUES('A0"+string(1,i/10+48)+string(1,i%10+48)+"','00000000',3,1,NULL,NULL,NULL);");
	for(int i=14;i<24;i++)
		query("INSERT INTO employee VALUES('A0"+string(1,i/10+48)+string(1,i%10+48)+"','00000000',3,2,NULL,NULL,NULL);");
}
vector<MYSQL_ROW> SE_MySQL::retrive(){
	vector<MYSQL_ROW> r;
	MYSQL_RES *result = mysql_store_result(con);
	int num_fields = mysql_num_fields(result);
	MYSQL_ROW row;
	while ((row = mysql_fetch_row(result)))
		r.push_back(row);
	return r;
}
Client_Info SE_MySQL::get_Info(string ID){
	Client_Info result;
	string query_="SELECT * FROM se_database.employee WHERE ID = '"+ID+"'";
	query(query_);
	vector<MYSQL_ROW> result_=retrive();
	if(!result_.size())
		return result;
	strcpy(result.ID,result_[0][0]);
	result.Emp_position=strtol(result_[0][2],NULL,10);
	result.Default_time=strtol(result_[0][3],NULL,10);
	if(result_[0][4])
		strcpy(result.Emp_Name,result_[0][4]);
	else
		strcpy(result.Emp_Name,"");
	if(result_[0][5])
		result.Gender=strtol(result_[0][5],NULL,10);
	else
		result.Gender=0;
	if(result_[0][6])
		strcpy(result.branch,result_[0][6]);
	else
		strcpy(result.branch,"");
	cout<<"===Client Info===\n";
	cout<<"Client_ID: "<<result.ID<<endl;
	cout<<"Client_position: "<<result.Emp_position<<endl;
	cout<<"Client_Default_time: "<<result.Default_time<<endl;
	cout<<"Client_Name: "<<result.Emp_Name<<endl;
	cout<<"Client_Gender: "<<result.Gender<<endl;
	cout<<"Client_branch: "<<result.branch<<endl;
}