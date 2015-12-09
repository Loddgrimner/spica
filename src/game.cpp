#include <iostream>
#include <algorithm>
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
	for (auto& i : entities) {
		i->update();
	}
	entities.erase(
    		std::remove_if(entities.begin(), entities.end(),
        	[](const std::shared_ptr<entity> p) { return p->isdead(); }),
    		entities.end());
}

void game::buildentity()
{
	std::cout << "Game building entity\n";
	entities.push_back(mentitybuilder->build());
}
