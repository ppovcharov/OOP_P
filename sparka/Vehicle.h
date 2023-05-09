#ifndef _V_
#define _V_
#include <iostream>
class Vehicle {
private:
	int id;
	int places;
	int maxSpeed;
protected:
	double rentPrice;
public:
	Vehicle(int id, int places, int maxSpeed, int rentPrice);
	Vehicle();
	virtual double getPrice()const=0;
	virtual ~Vehicle();
};

#endif