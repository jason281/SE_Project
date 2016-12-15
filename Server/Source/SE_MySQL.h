#ifndef __SE_MYSQL_H__
#define __SE_MYSQL_H__

#include "SE_Definition.h"

class SE_MySQL{
public:
	SE_MySQL();
	format();
	query(string);
private:
	MYSQL *con;
};
#endif