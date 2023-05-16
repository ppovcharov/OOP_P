#include "Engine.h"

Engine::Engine(std::string name, std::string manufacturer, unsigned int year, int horsepower):CarPart(name,manufacturer,year)
{
	this->horsepower = horsepower;
}

void Engine::addPiston(const Piston& other)
{
	pistons.push_back(other);
}

void Engine::display() const
{
	std::cout << horsepower << ' ';
	for (int i = 0; i < pistons.size(); i++)
	{
		pistons[i].display();
	}
	std::cout << CarPart::manufacturer << ' ' << CarPart::name << ' ' << CarPart::year << std::endl;
}
