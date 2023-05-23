#ifndef _V_
#define _V_
#include <iostream>

class Vehicle {
private:
	int power;
	int weight;
public:
	Vehicle(int power=0, int weight=0);
	virtual void startEngine() const = 0;
	int getPower() const;
	int getWeight() const;
	virtual ~Vehicle();
};

#endif