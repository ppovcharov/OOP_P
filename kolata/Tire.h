#ifndef _T_
#define _T_
#include "CarPart.h"

class Tire : public CarPart{
private:
	double width;
	double profil;
	double diameter;
public:
	Tire(std::string name, std::string manufacturer, unsigned int year, double width, double profil, double diameter);
	void display() const override;
};

#endif