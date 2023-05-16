#ifndef _CP_
#define _CP_
#include <string>
#include <iostream>
class CarPart {
protected:
	std::string name;
	std::string manufacturer;
	unsigned int year;
	int id;
	static int count;
public:
	static int getCount();
	CarPart(std::string name, std::string manufacturer, unsigned int year);
	virtual void display() const = 0;
	virtual ~CarPart();
};
#endif