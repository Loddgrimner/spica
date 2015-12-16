#pragma once
#include <memory>
#include <map>
#include <string>

class entity;

class component
{
public:
	component ();
	virtual ~component ();
	void sethost(entity* home);
	virtual void receivemessage(const std::map<std::string,int>& data) = 0;
	virtual void update() = 0;

protected:
	void sendmessage(const std::map<std::string,int>& data);
	void killhost();

private:
	entity* mhost = nullptr;
	/* data */
};
