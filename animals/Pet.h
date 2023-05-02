#ifndef _P_
#define _P_
#include "Animal.h"
class Pet : public Animal {
private:
	char* ownerName;
	unsigned int size;
	unsigned int phoneNumber;
public:
	Pet(const char* animalName, unsigned int animalAge, const char* ownerName="", unsigned int phoneNumber=0);
	~Pet();
	Pet& operator=(const Pet& other);
	Pet(const Pet& other);
	void printPet();
	void changeOwner(const char* ownerName);
};

#endif