#include "pch.h"
#include "AnimalDetector.h"
#include <iostream>


void AnimalDetector::detectAnimal(Animal a) {
	std::cout << "It's the sound of an animal" << std::endl;
	a.makeNoise();
}
void AnimalDetector::detectAnimal(Dog d) {
	std::cout << "It's a dog" << std::endl;
	d.makeNoise();
}
void AnimalDetector::detectAnimal(Cat c) {
	std::cout << "It's a cat" << std::endl;
	c.makeNoise();
}
