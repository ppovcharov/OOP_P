#ifndef _EC_
#define _EC_
#include "Car.h"

class ElectricCar :public Car {
public:
	ElectricCar(std::string owner, bool tangible, const char* model, int power, int weight);
	void startEngine() const override;
};


#endif