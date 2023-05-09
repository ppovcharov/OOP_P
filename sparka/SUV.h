#ifndef _SUV_
#define _SUV_
#include "Vehicle.h"
class SUV :public Vehicle {
private:
	bool is4x4;
public:
	SUV(bool is4x4, int id, int places, int maxSpeed, int rentPrice);
};

#endif