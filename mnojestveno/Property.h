#ifndef _P_
#define _P_
#include <iostream>
#include <string>

class Property {
private:
	std::string owner;
	bool tangible;
public:
	Property(std::string owner="", bool tangible=true);
	std::string getOwner() const;
	bool getTangible() const;
};

#endif