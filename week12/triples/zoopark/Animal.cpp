#include "Animal.h"
int Animal::count = 0;
void Animal::setName(char* name)
{
	if (name) {
		delete[]name;
	}
	this->size = strlen(name);
	strcpy_s(this->name, size + 1, name);
}

void Animal::setFood(Food f)
{
	this->food = f;
}

const char* Animal::getName() const
{
	return name;
}

int Animal::getCount() const
{
	return count;
}

Animal::Animal(char* name, int weight):weight{weight}
{
	count++;
	this->size = strlen(name);
	this->name = new char[size];
	strcpy_s(this->name, size + 1, name);
}

int Animal::getWeight() const
{
	return weight;
}

