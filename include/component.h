#pragma once
#include <memory>

class entity;

class component
{
public:
	component ();
	virtual ~component ();
	void sethost(entity* home);
	virtual void receivemessage(int code, int value) = 0;
	virtual void update() = 0;

protected:
	void sendmessage(int code, int value);
	void killhost();

private:
	entity* mhost = nullptr;
	/* data */
};
