#include "lifetimer.h"
#include <iostream>
lifetimer::lifetimer()
{
	std::cout << "Lifetimer Constructor\n";
}
lifetimer::~lifetimer()
{
	std::cout << "Lifetimer Destructor\n";
}
void lifetimer::update()
{
	std::cout << "Lifetimer Update\n";
	time++;
	std::cout << "Time: " << time << "\n";
	if(time >= killtime)
	{
		component::killhost();
		std::cout << "Lifetimer killing host.\n";
	}
}
void lifetimer::receivemessage(int code, int value)
{
	std::cout << "Lifetimer received message";
	std::cout << " Code:" << code << " Value:" << value << "\n";
}
