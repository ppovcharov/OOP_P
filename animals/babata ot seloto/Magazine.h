#ifndef _M_
#define _M_
#include "Item.h"
class Magazine : public Item{
private:
	int issueNumber;
public:
	Magazine(int issueNumber, int id, const char* title, const char* author, Date d);
};
#endif