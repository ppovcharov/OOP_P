#ifndef _A_
#define _A_
#include <iostream>
#include <string>
#include "Food.h"
class Animal {
protected:
	char* name;
	int size;
	void setName(char* name);
	void setFood(Food f);
	Food food;
private:
	static int count;
	int weight;
public:
	const char* getName()const;
	int getCount() const;
	Animal(char* name=nullptr, int weight=0);
	virtual Food getFood() const = 0;
	virtual int eat() const=0;
	int getWeight()const;
};

#endif