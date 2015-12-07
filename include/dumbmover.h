#pragma once
#include "component.h"

class dumbmover:public component
{
public:
	dumbmover ();
	virtual ~dumbmover ();
	
	void receivemessage(int code, int value);
	void update();

private:
	int x;
	int y;
	/* data */
};
