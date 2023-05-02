#include "Animal.h"
Animal::Animal(const char* name, unsigned int age) {
	this->size = strlen(name);
	this->name = new char[size + 1];
	strcpy_s(this->name,size+1, name);
	this->age = age;
}

Animal::~Animal()
{
	delete[] name;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other) {
		this->size = other.size;
		delete[] name;
		this->name = new char[size + 1];
		strcpy_s(name,size+1, other.name);
		age = other.age;
	}
	return *this;
}
Animal::Animal(const Animal& other) {
	this->size = other.size;
	this->name = new char[size + 1];
	strcpy_s(name,size+1, other.name);
	this->age = other.age;
}

void Animal::changeName(const char* name)
{
	this->size = strlen(name);
	delete[] this->name;
	this->name = new char[size + 1];
	strcpy_s(this->name,size+1, name);
}

void Animal::printAnimal()
{
	std::cout << name << " " << age << " ";
}
