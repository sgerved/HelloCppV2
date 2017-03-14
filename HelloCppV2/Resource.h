#pragma once
#include <string>

class Resource
{
private:
	std::string resourceStr;
public:
	Resource(std::string str);
	~Resource();
	std::string GetReourceStr() const { return resourceStr; }
	void SetResourceStr(std::string newStr) { resourceStr = newStr; }
};

