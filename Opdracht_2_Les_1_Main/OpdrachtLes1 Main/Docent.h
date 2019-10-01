#pragma once
#include <string>
#include "Person.h"



class Docent: public Person
{
public:
	Docent();
	int getExperience();
	Docent(std::string name, int age, int jobExperience);
	~Docent();
private:
	int jobExperience;
};

