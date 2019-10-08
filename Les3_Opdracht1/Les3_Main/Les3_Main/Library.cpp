#include "pch.h"
#include "Library.h"
#include <string>
#include <iostream>

Library::Library() {
}


Library::~Library() {
	std::cout << "Library dtor" << std::endl;
}

void Library::show() {
	if (book) {
		std::cout << " Library contains " << book->type  << std::endl;
	}
	else {
		std::cout << " Library is empty "  << std::endl;
	}
}

void Library::addBook(std::string type) {
	book = new Book(type);
}

void Library::borrowBook() {
	delete book;
}
