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
	entities.erase(std::remove_if(entities.begin(), entities.end(), [](const std::shared_ptr<const entity> p) { return p->isdead(); }), entities.end());
	entities.insert(std::end(entities), std::begin(builtentities), std::end(builtentities));
	builtentities.clear();
}

void game::buildentity(std::map<std::string,int>& data)
{
	std::cout << "Game building entity\n";
	builtentities.push_back(mentitybuilder->build(data));
}
