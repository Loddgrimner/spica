#include <iostream>
#include "game.h"
#include "entity.h"
#include "entitybuilder.h"

game::game()
{
	std::cout << "Game Constructor\n";
	mentitybuilder = new entitybuilder;
}
game::~game()
{
	std::cout << "Game Destructor\n";
	delete mentitybuilder;
}

void game::update()
{
	std::cout << "Game update\n";
}

void game::buildentity()
{
	std::cout << "Game building entity\n";
	mentitybuilder->build();
}
