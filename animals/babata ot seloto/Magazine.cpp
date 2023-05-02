#include "Magazine.h"

Magazine::Magazine(int issueNumber, int id, const char* title, const char* author, Date d) : Item(id,title,author,d)
{
	this->issueNumber = issueNumber;
}
