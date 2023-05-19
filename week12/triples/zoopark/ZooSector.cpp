#include "ZooSector.h"

Zoosector::Zoosector(double x, double y):x{x},y{y}
{
}

void Zoosector::print() const
{
	for (int i = 0; i < animals.size(); i++)
	{
		std::cout << animals[i]->getName() << std::endl;
	}
}

void Zoosector::addAnimal(Animal* animal)
{
	animals.push_back(animal);
}
