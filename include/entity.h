#pragma once
#include <vector>
#include <memory>
#include "component.h"

class component;

class entity
{
public:
	entity ();
	~entity ();
	void pumpmessage(int code, int value);
	void update();

private:
	std::vector<std::shared_ptr<component>> components;
};
