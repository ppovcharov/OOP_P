#include "Zoo.h"

Zoo::Zoo(std::string name, Animal** animals, int count)
{
	this->name = name;
	this->count = count;
	this->animals = new Animal * [count];
	for (int i = 0; i < count; i++)
	{
		this->animals[i] = animals[i];
	}
}

void Zoo::addAnimal(Animal* animal)
{
	Animal** temp = new Animal*[count];
	for (int i = 0; i < count; i++)
	{
		temp[i] = animals[i];
	}
	delete[] animals;
	count++;
	this->animals = new Animal * [count];
	for (int i = 0; i < count-1; i++)
	{
		animals[i] = temp[i];
	}
	animals[count - 1] = animal;
	delete[] temp;
}

void Zoo::printCount() const
{
	std::cout << Animal::getCount;
}

void Zoo::feed()
{
	for (int i = 0; i < count; i++)
	{
		animals[i]->eat();
	}
}
