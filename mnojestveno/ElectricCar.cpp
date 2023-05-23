#include "ElectricCar.h"

ElectricCar::ElectricCar(std::string owner, bool tangible, const char* model, int power, int weight):Car(model,owner,power,weight)
{
}

void ElectricCar::startEngine() const
{
	std::cout << "No sound" << std::endl;
}
