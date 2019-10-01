#pragma once
#include <string>
#include "Person.h"



class Student : public Person
{	
public:
	Student();
	Student(std::string name, int age, float debt);
	
	float getDebt();
	~Student();

private:
	float debt;
};

