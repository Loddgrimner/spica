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

void component::receivemessage(const std::map<std::string,int>& data)
{
}

void component::sendmessage(const std::map<std::string,int>& data)
{
	mhost->pumpmessage(data);
}

void component::killhost()
{
	mhost->die();
}
