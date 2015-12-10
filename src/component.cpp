#include "component.h"
#include "entity.h"
#include <iostream>

component::component()
{
	std::cout << "Component Constructor\n";
}

component::~component()
{
	std::cout << "Component Destructor\n";
}

void component::sethost(entity* host)
{
	mhost = host;
}

void component::update()
{
}

void component::receivemessage(int code, int value)
{
}

void component::sendmessage(int code, int value)
{
	mhost->pumpmessage(code, value);
}

void component::killhost()
{
	mhost->die();
}
