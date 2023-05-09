#ifndef _S_
#define _S_
#include "Vehicle.h"
class Spark :public Vehicle {
private:
	Vehicle** vehicles;
	int size;
public:
	Spark(Vehicle** vehicles, int size);
	~Spark();
	Spark(Spark& other);
	Spark& operator=(const Spark& other);
	void Add(const Vehicle& other);
	double getPrice(int index);
};

#endif