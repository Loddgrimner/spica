#include "entity.h"
#include "ncurses.h"
#include <iostream>
#include "dumbmover.h"

entity::entity()
{
	std::cout << "Entity Constructor\n";
	components.push_back(std::make_shared<dumbmover>());
}

entity::~entity()
{
	std::cout << "Entity Destructor\n";
}
