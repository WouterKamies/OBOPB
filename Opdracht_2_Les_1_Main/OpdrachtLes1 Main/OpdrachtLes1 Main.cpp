#include "pch.h"
#include <iostream>
#include <string>

#include "Student.h"
#include "Docent.h"
#include "Person.h"

int main()
{
	Student wouter = Student("Wouter", 19, 8750.50);
	std::cout << wouter.getName() << wouter.getAge() << wouter.getDebt() << std::endl;

	Docent richard = Docent("Richard", 34, 11);
	std::cout << richard.getName() << richard.getAge() << richard.getExperience() << std::endl;

	return 0;
}
