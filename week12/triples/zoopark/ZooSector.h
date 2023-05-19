#ifndef _ZS_
#define _ZS_
#include "Bird.h"
#include "Mammal.h"
#include <vector>

class Zoosector {
private:
	std::vector<Animal*> animals;
	double x;
	double y;
	void print() const;
	void addAnimal(Animal* animal);

};


#endif