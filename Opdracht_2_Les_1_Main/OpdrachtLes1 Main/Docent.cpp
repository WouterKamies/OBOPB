#include "pch.h"
#include "Docent.h"
#include <string>

Docent::Docent() {}

Docent::Docent(std::string name, int age, int jobExperience) :
	Person(name, age), jobExperience(jobExperience) {}

Docent::~Docent() {}

int Docent::getExperience()
{
	return jobExperience;
}

