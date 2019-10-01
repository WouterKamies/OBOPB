#pragma once
#include "Dog.h"
#include "Animal.h"
#include "Cat.h"
class AnimalDetector
{
public:
	void detectAnimal(Animal a);
	void detectAnimal(Dog d);
	void detectAnimal(Cat c);
};

