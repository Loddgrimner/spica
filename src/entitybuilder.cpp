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

std::shared_ptr<entity> entitybuilder::build()
{
	std::cout << "Building\n";
	std::shared_ptr<entity> e = std::make_shared<entity>();
	return e; 
}
