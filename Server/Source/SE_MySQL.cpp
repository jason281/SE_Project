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