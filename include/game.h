#pragma once
#include <vector>
#include <memory>
class entity;
class entitybuilder;
class game
{
public:
	game ();
	virtual ~game ();

	void update();
	void buildentity();
private:
	std::vector<std::shared_ptr<entity>> entities;
	entitybuilder* mentitybuilder;
};
