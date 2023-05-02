#include "Pet.h"
Pet::Pet(const char* animalName, unsigned int animalAge, const char* ownerName, unsigned int phoneNumber) :Animal(animalName,animalAge)
{
	this->size = strlen(ownerName);
	this->ownerName = new char[size + 1];
	strcpy_s(this->ownerName,size+1, ownerName);
	this->phoneNumber = phoneNumber;
}

Pet::~Pet()
{
	delete[] ownerName;
}

Pet& Pet::operator=(const Pet& other)
{
	if (this != &other) {
		Animal::operator=(other);
		this->size = other.size;
		delete[] ownerName;
		this->ownerName = new char[size + 1];
		strcpy_s(this->ownerName,size+1, other.ownerName);
		this->phoneNumber = other.phoneNumber;
	}
	return *this;
}

Pet::Pet(const Pet& other):Animal(other)
{
	this->size = other.size;
	this->ownerName = new char[size + 1];
	strcpy_s(ownerName,size+1, other.ownerName);
	this->phoneNumber = other.phoneNumber;
}

void Pet::printPet()
{
	Animal::printAnimal();
	std::cout << ownerName << " " << phoneNumber << std::endl;
}

void Pet::changeOwner(const char* ownerName)
{
	this->size = strlen(ownerName);
	delete[] this->ownerName;
	this->ownerName = new char[size + 1];
	strcpy_s(this->ownerName,size+1, ownerName);
}
