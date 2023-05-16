#include "CarPart.h"
int CarPart::count = 1000;
int CarPart::getCount()
{
	return count;
}
CarPart::CarPart(std::string name, std::string manufacturer, unsigned int year)
{
	this->name = name;
	this->manufacturer = manufacturer;
	this->year = year;
	this->id=count++;
}