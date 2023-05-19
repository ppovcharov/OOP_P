#ifndef _Z_
#define _Z_
#include "ZooSector.h"

class Zoo {
private:
	std::string name;
	Animal** animals;
	int count;
	int kgPlants;
	int kgMeat;
public:
	Zoo(std::string name, Animal** animals, int count);
	void addAnimal(Animal* animal);
	static void printCount() const;
	void feed();
};

#endif