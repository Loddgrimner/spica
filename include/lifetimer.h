#pragma once
#include "component.h"

class lifetimer:public component
{
public:
	lifetimer ();
	virtual ~lifetimer ();
	
	void receivemessage(const std::map<std::string,int>& data);
	void update();

private:
	int time = 0;
	int killtime = 3;
};
