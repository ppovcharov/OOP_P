#ifndef _F_
#define _F_
#include <iostream>

class Food {
private:
	std::string type;
public:
	Food(std::string type="") {
		this->type = type;
	}
	std::string getType()const {
		return type;
	}
};
#endif