#include <map>
#include <string>

class message
{
public:
	message ();
	virtual ~message ();

private:
	std::map<std::string,int> data;
};
