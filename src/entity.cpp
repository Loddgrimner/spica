#include <iostream>
#include "entity.h"
#include "ncurses.h"
#include "dumbmover.h"
#include "component.h"
#include "game.h"

entity::entity()
{
	std::cout << "Entity Constructor\n";
	for(int i = 0; i < 2; i++)
	{
		std::shared_ptr<component> c = std::make_shared<dumbmover>();
		c->sethome(this);
		components.push_back(c);
	}
}

entity::~entity()
{
	std::cout << "Entity Destructor\n";
}

void entity::pumpmessage(int code, int value)
{
	std::cout << "Enity Pumping messages\n";
	for (auto& i : components) {
		i->receivemessage(code, value);
	}
}

void entity::update()
{
	std::cout << "Enity Update\n";
	for (auto& i : components) {
		i->update();
	}
}
