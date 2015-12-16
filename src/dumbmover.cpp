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
	component::sendmessage(std::map<std::string,int>{
		{"abc",123},
		{"asd",3484},
		{"aciwjdbc",8585}
	});
}
void dumbmover::receivemessage(const std::map<std::string,int>& data)
{
	std::cout << "Dumbmover received message:\n";
	for(const auto& element : data)
	{
		std::cout << element.first << ' ';
		std::cout << element.second << '\n';
	}
}
