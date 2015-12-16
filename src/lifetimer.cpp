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
void lifetimer::receivemessage(const std::map<std::string,int>& data)
{
	std::cout << "Lifetimer received message:\n";
	for(const auto& element : data)
	{
		std::cout << element.first << ' ';
		std::cout << element.second << '\n';
	}
}
