#include "Vehicle.h"
#include "Car.h"
#include "SUV.h"
#include "Bus.h"
int main() {
	SUV suv(true, 1, 5, 120, 250);
	Bus bus(250, 2, 40, 90, 1000);
	Car car("beemve", 3, 2, 250, 700);
	Vehicle** vehicles=new Vehicle*[3];
	vehicles[0] = new SUV(suv);
	vehicles[1] = new Bus(bus);
	vehicles[2] = new Car(car);

	for (int i = 0; i < 3; i++)
	{
		delete vehicles[i];
	}
	delete[] vehicles;
}