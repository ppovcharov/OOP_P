#ifndef _P_
#define _P_
#include "CarPart.h"

class Piston :public CarPart {
private:
	double diameter;
	double hod;
public:
	Piston(std::string name, std::string manufacturer, unsigned int year, double diameter, double hod);
	void display() const override;
};

#endif