#pragma once
#include <vector>
#include <memory>
#include "component.h"

class entity
{
public:
	entity ();
	~entity ();

private:
	std::vector<std::shared_ptr<component>> components;
	/* data */
};
