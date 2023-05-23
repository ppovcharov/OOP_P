#ifndef _C_
#define _C_
#include <iostream>
#include "Vehicle.h"
#include "Property.h"

class Car :public Vehicle, public Property {
private:
	char* model;
	int size;
	void free();
	void copy(const char* other);
public:
	Car(const char* model, std::string owner, int power, int weight);
	~Car();
	Car(const Car& other);
	Car& operator=(const Car& other);
	void startEngine() const override;
};

#endif