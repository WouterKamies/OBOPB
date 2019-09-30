#include "pch.h"
#include "Person.h"



Person::Person()
{
}

Person::Person(std::string name, int age) : name(name), age(age)
{
}

std::string Person::getName() {
	return Person::name;
}
int Person::getAge() {
	return Person::age;
}

Person::~Person() {}
