#include "Property.h"

Property::Property(std::string owner, bool tangible):owner{owner},tangible{tangible}
{
}

std::string Property::getOwner() const
{
	return owner;
}

bool Property::getTangible() const
{
	return tangible;
}
