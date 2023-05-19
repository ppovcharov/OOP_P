#include "Mammal.h"

Mammal::Mammal(char* name, char* adopter, int weight):Animal(name,weight)
{
	Animal::setFood(Food("plants"));
	this->size = strlen(adopter);
	this->adopter = new char[size];
	strcpy_s(this->adopter, size + 1, adopter);
}

Mammal::~Mammal()
{
	delete[] adopter;
	delete[] Animal::name;
}

Mammal::Mammal(Mammal& other)
{
	this->size = other.size;
	this->adopter = new char[size];
	strcpy_s(this->adopter, size + 1, other.adopter);
	Animal::setName(other.name);
	Animal::setFood(other.getFood());
}

Mammal& Mammal::operator=(const Mammal& other)
{
	if (this != &other) {
		delete[] adopter;
		this->size = other.size;
		this->adopter = new char[size];
		strcpy_s(this->adopter, size + 1, other.adopter);
		Animal::setName(other.name);
		Animal::setFood(other.getFood());
	}
	return *this;
}

Food Mammal::getFood() const
{
	return Animal::food;
}

int Mammal::eat() const
{
	return Animal::getWeight()/4;//primerno qde 1/4 ot tegloto si
}
