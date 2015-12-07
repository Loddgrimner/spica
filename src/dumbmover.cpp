#include "dumbmover.h"
#include <iostream>
dumbmover::dumbmover()
{
	std::cout << "Dumbmover Constructor\n";
}
dumbmover::~dumbmover()
{
	std::cout << "Dumbmover Destructor\n";
}
void dumbmover::update()
{
	std::cout << "Dumbmover Update\n";
	component::sendmessage(0,0);
}
void dumbmover::receivemessage(int code, int value)
{
	std::cout << "Dumbmover received message";
	std::cout << " Code:" << code << " Value:" << value << "\n";
}
