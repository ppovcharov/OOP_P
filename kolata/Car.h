#ifndef _C_
#define _C_
#include "CarPart.h"

class Car {
private:
	std::string brand;
	std::string model;
	CarPart** parts;
public:
	Car(std::string brand, std::string model, CarPart** parts);
};

#endif