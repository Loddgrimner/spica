#include <iostream>
#include "entitybuilder.h"
#include "dumbmover.h"
#include "lifetimer.h"

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
	e->insertcomponent(std::make_shared<dumbmover>());
	e->insertcomponent(std::make_shared<lifetimer>());
	return e; 
}
