#pragma once
#include <string>
#include "Person.h"



class Student : public Person
{	
public:
	Student();
	Student(float debt);
	float debt;
	float getDebt();
	~Student();
};

