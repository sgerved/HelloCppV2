#pragma once
#include <string>
#include <vector>
#include <memory>
#include "WeightEntry.h"
#include "Resource.h"

class Person
{
private:
    std::string name;
    std::vector<WeightEntry> weightLog;
	std::shared_ptr<Resource> pResource;
public:
    Person();
    Person(std::string nameStr);
	void SetName(std::string strName) { name = strName; }
	void AddWeightLog(WeightEntry weightEntry) { weightLog.push_back(weightEntry); }
    std::string getWeights();
	void AddReource();
	std::string GetRecourceStr();
};
