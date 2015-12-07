#include "component.h"
#include <iostream>

component::component()
{
	std::cout << "Component Constructor\n";
}

component::~component()
{
	std::cout << "Component Destructor\n";
}
