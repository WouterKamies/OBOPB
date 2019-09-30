#include "pch.h"
#include "Student.h"
#include <string>


Student::Student() {}

Student::Student(float debt) : debt(debt) {}

float Student::getDebt()
{
	return debt;
}

Student::~Student() {}
