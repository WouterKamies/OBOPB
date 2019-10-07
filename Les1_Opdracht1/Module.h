#pragma once
#include <string>

class Module
{
public:
	Module(std::string name, int tijd, std::string docent);
private:
	std::string name;
	int tijd;
};

