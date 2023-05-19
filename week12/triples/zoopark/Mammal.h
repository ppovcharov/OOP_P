#ifndef _M_
#define _M_
#include "Animal.h"

class Mammal :public Animal {
private:
	char* adopter;
	int size;
public:
	Mammal(char* name, char* adopter, int weight);
	~Mammal();
	Mammal(Mammal& other);
	Mammal& operator=(const Mammal& other);
	virtual Food getFood() const;
};


#endif