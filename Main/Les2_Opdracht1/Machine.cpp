#include "pch.h"
#include "Machine.h"
#include <iostream>


void Machine::detectCoin(Coin a) {
	std::cout << "You put in a coin!" << std::endl;
	a.getWorth();
}

void Machine::detectCoin(FiftyCent b) {
	std::cout << "You put in 50 cents!" << std::endl;
	b.getWorth();
}

void Machine::detectCoin(Euro c) {
	std::cout << "You put in 1 euro!" << std::endl;
	c.getWorth();
}

void Machine::detectCoin(Special d) {
	std::cout << "You put in a coffee coin!" << std::endl;
	d.getWorth();
}
