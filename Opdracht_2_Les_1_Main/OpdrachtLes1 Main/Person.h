#pragma once
#include <string>

class Person
{

public:
	Person();
	std::string name;
	int age;
	std::string getName();
	int getAge();
	Person(const std::string name, int age);
	~Person();
};

