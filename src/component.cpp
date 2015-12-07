#include "component.h"
#include <iostream>

component::component()
{
	std::cout << "Component Constructor\n";
	mhome = nullptr;
}

component::~component()
{
	std::cout << "Component Destructor\n";
}

void component::sethome(entity* home)
{
	mhome = home;
}

void component::update()
{
}

void component::receivemessage(int code, int value)
{
}

void component::sendmessage(int code, int value)
{
	mhome->pumpmessage(code, value);
}
