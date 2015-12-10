#include <iostream>
#include "entity.h"
#include "ncurses.h"
#include "dumbmover.h"
#include "lifetimer.h"
#include "component.h"
#include "game.h"

entity::entity()
{
	std::cout << "Entity Constructor\n";
	std::shared_ptr<component> c = std::make_shared<dumbmover>();
	c->sethost(this);
	std::shared_ptr<component> t = std::make_shared<lifetimer>();
	t->sethost(this);
	components.push_back(t);
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
