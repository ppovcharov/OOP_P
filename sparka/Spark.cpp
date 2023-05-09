#include "Spark.h"

Spark::Spark(Vehicle** vehicles, int size)
{
	this->size = size;
	for (int i = 0; i < size; i++)
	{
		*this->vehicles[i] = *vehicles[i];
	}
}

Spark::~Spark()
{
	for (int i = 0; i < size; i++)
	{
		delete vehicles[i];
	}
	delete[] vehicles;
}

Spark::Spark(Spark& other)
{
	this->size = other.size;
	for (int i = 0; i < size; i++)
	{
		*this->vehicles[i] = *other.vehicles[i];
	}
}

Spark& Spark::operator=(const Spark& other)
{
	if (this != &other) {
		this->size = other.size;
		for (int i = 0; i < size; i++)
		{
			*vehicles[i] = *other.vehicles[i];
		}
	}
	return *this;
}

void Spark::Add(const Vehicle& other)
{
	Vehicle** copies = vehicles;
	for (int i = 0; i < size; i++)
	{
		delete vehicles[i];
	}
	delete[] vehicles;
	size++;
	for (int i = 0; i < size-1; i++)
	{
		*vehicles[i] = *copies[i];
	}
	*vehicles[size - 1] = other;
}

double Spark::getPrice(int index)
{
	return vehicles[index]->getPrice();
}
