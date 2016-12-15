#include "SE_MySQL.h"

SE_MySQL::SE_MySQL(){
	con =  mysql_init(NULL);
	if (con == NULL) 
	{
		cerr<< mysql_error(con) <<endl;
		return;
	}
}