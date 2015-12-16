#pragma once
#include "component.h"

class dumbmover:public component
{
public:
	dumbmover ();
	virtual ~dumbmover ();
	
	void receivemessage(const std::map<std::string,int>& data);
	void update();

private:
	int x;
	int y;
	/* data */
};
