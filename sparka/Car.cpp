#include "Car.h"

Car::Car(const char* brand, int id, int places, int maxSpeed, int rentPrice) :Vehicle(id, places, maxSpeed, rentPrice)
{
	size = strlen(brand);
	this->brand = new char[size + 1];
	strcpy_s(this->brand, size + 1, brand);
}

Car::~Car()
{
	delete[] brand;
}

Car::Car(Car& other)
{
	this->size = other.size;
	this->brand = new char[size + 1];
	strcpy_s(brand, size + 1, other.brand);
}

Car& Car::operator=(const Car& other)
{
	if (this != &other) {
		this->size = other.size;
		delete[] brand;
		this->brand = new char[size + 1];
		strcpy_s(brand, size + 1, other.brand);
	}
	return *this;
}

double Car::getPrice() const
{
	return rentPrice;
	//i taka za drugite metodi
}
