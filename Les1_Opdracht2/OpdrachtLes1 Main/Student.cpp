#include "pch.h"
#include "Student.h"
#include <string>


Student::Student() {}

Student::Student(std::string name, int age, float debt) : 
	Person(name, age), debt(debt) {}

Student::~Student() {}

float Student::getDebt()
{
	return debt;
}


