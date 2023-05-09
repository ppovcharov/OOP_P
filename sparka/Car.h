#ifndef _C_
#define _C_
#include "Vehicle.h"
class Car :public Vehicle {
private:
	char* brand;
	int size;
public:
	Car(const char* brand, int id, int places, int maxSpeed, int rentPrice);
	~Car();
	Car (Car& other);
	Car& operator=(const Car& other);
	double getPrice() const override;
};

#endif