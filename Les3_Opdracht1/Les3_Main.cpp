#include "pch.h"
#include <iostream>
#include <string>
#include "Library.h"
#include "Book.h"

void borrowBook(Library* library) {
	std::cout << "Book has been borrowed" << std::endl;
	library->addBook("Nothing");
	library->show();
}

int main() {
	std::cout << " Making library " << std::endl;
	Library* library = new Library();
	library->show();

	library->addBook(" Puk van de petterflat ");
	library->show();

	borrowBook(library);

	delete library;

	return 0;
}
