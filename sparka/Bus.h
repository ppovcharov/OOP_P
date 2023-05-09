#ifndef _B_
#define _B_
#include "Vehicle.h"
class Bus : public Vehicle {
private:
	int luggageCapacity;
public:
	Bus(int luggageCapacity, int id, int places, int maxSpeed, int rentPrice);
};

#endif