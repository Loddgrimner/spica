#pragma once
#include <vector>
#include <memory>
#include <map>
#include <string>
class entity;
class entitybuilder;
class game
{
public:
	game ();
	virtual ~game ();

	void update();
	void buildentity(std::map<std::string,int>& data);
private:
	std::vector<std::shared_ptr<entity>> entities;
	entitybuilder* mentitybuilder;
};
