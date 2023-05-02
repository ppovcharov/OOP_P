#ifndef _I_
#define _I_
#include "Date.h"
#include <iostream>
class Item {
private:
	int id;
	char* title;
	unsigned int titleSize;
	char* author;
	unsigned int authorSize;
	Date publicationDate;
public:
	Item(int id, const char* title, const char* author, Date d);
	~Item();
	Item& operator=(const Item& other);
	Item(const Item& other);
};

#endif