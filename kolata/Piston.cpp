#include "Piston.h"

Piston::Piston(std::string name, std::string manufacturer, unsigned int year, double diameter, double hod) : CarPart(name,manufacturer,year)
{
	this->diameter = diameter;
	this->hod = hod;
}

void Piston::display() const
{
	std::cout << diameter << " " << hod <<' ' << CarPart::manufacturer << ' ' << CarPart::name << ' ' << CarPart::year << std::endl;
}
