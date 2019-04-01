#ifndef _MYSQL_H
#define _MYSQL_H
#define DB_HOST	    "127.0.0.1"
#define DB_USER     "root"
#define DB_PASS     "1"
#define DB_NAME     "bx"
#include"C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h"
class OprDB
{
	static MYSQL *m_mysql;   // 数据库句柄
	public:	
	static void initDB();	 // 1.初始化连接
	static void destroyDB(); // 2.断开连接	
	static void mysqltov();
	static void vtomysql();
};
#endif
