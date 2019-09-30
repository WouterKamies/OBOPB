#include "pch.h"
#include <iostream>
#include <string>

#include "Student.h"
#include "Docent.h"
#include "Person.h"

int main()
{
	Student wouter;
	wouter.name = "Wouter";
	wouter.age = 19;
	wouter.debt = 8750.50;
	std::cout << wouter.getName() << std::endl;
	std::cout << wouter.getAge() << std::endl;
	std::cout << wouter.getDebt() << std::endl;
	
	Docent richard;
	richard.name = "Richard";
	richard.age = 32;
	richard.jobExperience = 11;
	std::cout << richard.getName() << std::endl;
	std::cout << richard.getAge() << std::endl;
	std::cout << richard.getExperience() << std::endl;

	return 0;
}
