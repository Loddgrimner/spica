#include <iostream>
#include "entity.h"
#include "ncurses.h"
#include "component.h"
#include "game.h"

entity::entity()
{
	std::cout << "Entity Constructor\n";
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

bool entity::isdead() const
{
	return dead;
}

void entity::die()
{
	dead = true;
}

void entity::insertcomponent(std::shared_ptr<component> c)
{
	c->sethost(this);
	components.push_back(c);
}
