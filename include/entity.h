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
	bool isdead() const;
	void die();
	void insertcomponent(std::shared_ptr<component>);

private:
	std::vector<std::shared_ptr<component>> components;
	game* mgame = nullptr;
	bool dead = false;
};
