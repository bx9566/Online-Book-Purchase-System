#include"lib.h"
lib::lib()
{
};
lib::lib(char *name,char *author,char *publish,double price,int amount)
{
	strcpy_s(m_name,name);
	strcpy_s(m_author,author);
	strcpy_s(m_publish,publish);
        m_price=price;
	m_amount=amount;
}
