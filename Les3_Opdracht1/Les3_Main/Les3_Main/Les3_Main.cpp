#include "pch.h"
#include <iostream>
#include <string>
#include "Library.h"

int main()
{
	std::cout << " Making library " << std::endl;
	Library* library = new Library();
	library->show();
	
	library->addBook(" Puk van de petterflat ");
	library->show();

	library->borrowBook();
	library->show();

	delete library;

	return 0;
}
