#ifndef _E_
#define _E_
#include "CarPart.h"
#include <vector>
#include "Piston.h"
class Engine : public CarPart{
private:
	int horsepower;
	std::vector <Piston> pistons;
public:
	Engine(std::string name, std::string manufacturer, unsigned int year,int horsepower);
	void addPiston(const Piston& other);
	void display() const override;
};

#endif