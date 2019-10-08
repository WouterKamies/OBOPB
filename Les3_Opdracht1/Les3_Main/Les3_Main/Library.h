#pragma once
#include "Book.h"
#include <string>

class Library
{
public:
	Library();
	~Library();
	void show();
	void addBook(std::string type);
	void borrowBook();
private:
	Book* book;
};

