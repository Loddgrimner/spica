#pragma once
#include <memory>
#include <map>
#include <string>
#include "entity.h"

class entitybuilder
{
public:
	entitybuilder ();
	virtual ~entitybuilder ();

	std::shared_ptr<entity> build(std::map<std::string,int>& data);
private:
};
