#ifndef _L_
#define _L_
#include "Assistant.h"
#include <vector>

class Library {
private:
	std::vector <BasePerson*> people;
	void free();
public:
	Library(std::vector<BasePerson*> people);
	Library(const Library& other);
	~Library();
	Library& operator=(const Library& other);
	void display() const;
};
#endif