#ifndef _B_
#define _B_
#include "Animal.h"

class Bird :public Animal {
private:
	std::string town;
public:
	Bird(char* name, std::string town, int weight);
	Food getFood() const;
	int eat() const;
};

#endif