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
SE_MySQL::query(string text){
	if(mysql_query(con,text.c_str()))
		cerr << mysql_error(con) << endl;
}
SE_MySQL::format(){
	query("DROP DATABASE IF EXISTS se_database;");
	query("CREATE DATABASE se_database;");
	query("USE se_database;");
	query("CREATE TABLE employee(ID char(255) NOT NULL UNIQUE,Emp_Position int NOT NULL,Emp_Name text,Gender bool,branch text);");
}