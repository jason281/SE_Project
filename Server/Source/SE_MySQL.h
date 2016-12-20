#ifndef __SE_MYSQL_H__
#define __SE_MYSQL_H__

#include "SE_Definition.h"

class SE_MySQL{
public:
	SE_MySQL();
	void format();
	void initialize();
	void query(string);
	void query(wstring);
	vector<MYSQL_ROW> retrive();
	Client_Info get_Info(string);
	
	int record_ID;
private:
	MYSQL *con;
};
#endif