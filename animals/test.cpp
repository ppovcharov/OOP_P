#include <iostream>
#include "Pet.h"
int main()
{
    Pet myPet("kuche",3,"az", 1);
    myPet.printPet();
    myPet.changeName("kotka");
    myPet.changeOwner("ti");
    myPet.printPet();
}