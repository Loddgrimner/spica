#include "entitybuilder.h"
#include <iostream>

entitybuilder::entitybuilder()
{
	std::cout << "Builder Constructor\n";
}
entitybuilder::~entitybuilder()
{
	std::cout << "Builder Destructor\n";
}

void entitybuilder::build()
{
	std::cout << "Building\n";
}
