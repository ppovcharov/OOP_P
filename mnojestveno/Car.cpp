#include "Car.h"

void Car::free()
{
	delete[] model;
}

void Car::copy(const char* other)
{
	this->size = strlen(other);
	this->model = new char[size];
	strcpy_s(this->model, size + 1, other);
}

Car::Car(const char* model, std::string owner, int power, int weight):Property(owner,true),Vehicle(power,weight)
{
	copy(model);
}

Car::~Car()
{
	free();
}

Car::Car(const Car& other):Property(other),Vehicle(other)
{
	copy(other.model);
}

Car& Car::operator=(const Car& other)
{
	if (this != &other) {
		Vehicle::operator=(other);
		Property::operator=(other);
		free();
		copy(other.model);
	}
	return *this;
}

void Car::startEngine() const
{
	std::cout << "Vro";
	for (size_t i = 0; i < Vehicle::getPower(); i=i+30)
	{
		std::cout << "o";
	}
	std::cout << "m" << std::endl;
}
