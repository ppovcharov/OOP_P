#ifndef _B_
#define _B_
#include "Item.h"
class Book :public Item {
private:
	char* genre;
	unsigned int genreSize;
public:
	Book(const char* genre, int id, const char* title, const char* author, Date d);
	~Book();
	Book& operator=(const Book& other);
	Book(const Book& other);
};
#endif