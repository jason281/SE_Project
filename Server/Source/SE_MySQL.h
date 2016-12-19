#ifndef __SE_MYSQL_H__
#define __SE_MYSQL_H__

#include "SE_Definition.h"

class SE_MySQL{
public:
	SE_MySQL();
	void format();
	void query(string);
	void query(wstring);
	vector<MYSQL_ROW> retrive();
private:
	MYSQL *con;
};
#endif