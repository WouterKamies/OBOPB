#pragma once
#include <string>

class Module
{
public:
	Module();
	Module(std::string name, int tijd);

	~Module();
private:
	std::string name;
	int tijd;
};

