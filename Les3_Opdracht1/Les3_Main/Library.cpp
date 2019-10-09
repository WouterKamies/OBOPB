#include "pch.h"
#include "Library.h"
#include <string>
#include <iostream>

Library::Library() {
	std::cout << "Library ctor" << std::endl;
}


Library::~Library() {
	std::cout << "Library dtor" << std::endl;
	delete book;
}

void Library::show() {
	if (!book) {
		std::cout << " Library contains nothing " << std::endl;
	}
	else {
		std::cout << " Library contains " << book->type << std::endl;
	}
}

void Library::addBook(std::string type) {
	if (book) {
		delete book;
	}
	book = new Book(type);
}
