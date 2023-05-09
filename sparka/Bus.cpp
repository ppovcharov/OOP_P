#include "Bus.h"

Bus::Bus(int luggageCapacity, int id, int places, int maxSpeed, int rentPrice) : Vehicle(id, places, maxSpeed, rentPrice)
{
	this->luggageCapacity = luggageCapacity;
}
