#pragma once
#include <memory>
#include "entity.h"

class entity;

class component
{
public:
	component ();
	virtual ~component ();
	void sethome(entity* home);
	virtual void receivemessage(int code, int value) = 0;
	virtual void update() = 0;

//protected:
	void sendmessage(int code, int value);

private:
	entity* mhome;
	/* data */
};
