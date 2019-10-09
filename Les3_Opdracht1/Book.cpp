#include "pch.h"
#include "Book.h"
#include <string>
#include <iostream>

Book::Book() {
	std::cout << "Book default ctor" << std::endl;
}

Book::Book(std::string theType) : type(theType) {
	std::cout << "Book ctor " << type << std::endl;
	this->type = type;
}

Book::~Book() {
	std::cout << "Book dtor " << std::endl;
}
