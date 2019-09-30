#pragma once
#include <string>
#include "Person.h"



class Docent: public Person
{
public:
	Docent();
	int jobExperience;
	int getExperience();

	~Docent();
};

