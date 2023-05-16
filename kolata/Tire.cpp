#include "Tire.h"

Tire::Tire(std::string name, std::string manufacturer, unsigned int year, double width, double profil, double diameter) : CarPart(name,manufacturer,year)
{
	this->width = width;
	this->profil = profil;
	this->diameter = diameter;
}

void Tire::display() const
{
	std::cout << width << ' ' << profil << ' ' << diameter<<' '<<CarPart::manufacturer<<' '<<CarPart::name<<' '<<CarPart::year << std::endl;
}
