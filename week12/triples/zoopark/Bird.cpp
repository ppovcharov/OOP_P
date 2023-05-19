#include "Bird.h"

Bird::Bird(char* name, std::string town, int weight):Animal(name,weight)
{
	this->town = town;
	Animal::setFood(Food("meat"));//primerno pticite qdat meso za da go ima v zadachata
}

Food Bird::getFood() const
{
	return Animal::food;
}

int Bird::eat() const
{
	return Animal::getWeight()/4;
}
