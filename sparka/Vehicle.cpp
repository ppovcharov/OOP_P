#include "Vehicle.h"

Vehicle::Vehicle(int id, int places, int maxSpeed, int rentPrice)
{
	this->id = id;
	this->places = places;
	this->maxSpeed = maxSpeed;
	this->rentPrice = rentPrice;
}

Vehicle::Vehicle()
{
	this->id = 0;
	this->places = 0;
	this->maxSpeed = 0;
	this->rentPrice = 0;
}
