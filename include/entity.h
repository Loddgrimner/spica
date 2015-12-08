#pragma once
#include <vector>
#include <memory>

class component;
class game;

class entity
{
public:
	entity ();
	~entity ();
	void pumpmessage(int code, int value);
	void update();

private:
	std::vector<std::shared_ptr<component>> components;
	game* mgame;
};
