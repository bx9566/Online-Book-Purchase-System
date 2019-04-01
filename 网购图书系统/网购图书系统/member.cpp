#include"member.h"
Member::Member()
{
}
Member::Member(int id,char *name,char *passwd,char *lev,char *tel,char *adress,char *time)
{
	m_id=id;
	strcpy_s(m_name,name);
	strcpy_s(m_passwd, passwd);
	strcpy_s(m_lev, lev);
	strcpy_s(m_tel, tel);
	strcpy_s(m_adress, adress);
	strcpy_s(m_time, time);
}

