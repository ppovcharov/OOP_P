#include "Vehicle.h"

Vehicle::Vehicle(int power, int weight):power{power}, weight{weight}
{
}

int Vehicle::getPower() const
{
	return power;
}

int Vehicle::getWeight() const
{
	return weight;
}
