#include "pch.h"
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Animal.h"
#include <iostream>

void saySomething(Animal& a) {
	a.makeNoise();
}
int main()
{
	Animal animal1;
	Dog animal2;
	Cat animal3;

	saySomething(animal1);
	saySomething(animal2);
	saySomething(animal3);

	return 0;
}