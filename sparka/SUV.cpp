#include "SUV.h"

SUV::SUV(bool is4x4, int id, int places, int maxSpeed, int rentPrice):Vehicle(id,places,maxSpeed,rentPrice)
{
	this->is4x4 = is4x4;
}
