#ifndef _A_
#define _A_
#include <iostream>
class Animal {
private:
	char* name;
	unsigned int age;
	unsigned int size;
protected:
void printAnimal();
public:
	Animal(const char* name = "", unsigned int age = 0);
	~Animal();
	Animal& operator=(const Animal& other);
	Animal(const Animal& other);
	void changeName(const char* name);
	
};

#endif