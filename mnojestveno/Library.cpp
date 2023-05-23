#include "Library.h"

void Library::free()
{
	for (int i = 0; i < people.size(); i++)
	{
		delete people[i];
	}
}

Library::Library(std::vector<BasePerson*> people)
{
	for (size_t i = 0; i < people.size(); i++)
	{
		this->people.push_back(people[i]);
	}
}

Library::Library(const Library& other)
{
	for (int i = 0; i < other.people.size(); i++)
	{
		people.push_back(other.people[i]);
	}
}

Library::~Library()
{
	free();
}

Library& Library::operator=(const Library& other)
{
	if (this != &other) {
		free();
		for (int i = 0; i < other.people.size(); i++)
		{
			people.push_back(other.people[i]);
		}
	}
	return *this;
}

void Library::display() const
{
	for (int i = 0; i < people.size(); i++)
	{
		people[i]->clone()->display();
	}
}
