#pragma once
#include <memory>
#include "entity.h"
#include "dumbmover.h"

class entitybuilder
{
public:
	entitybuilder ();
	virtual ~entitybuilder ();

	std::shared_ptr<entity> build();

private:
};
