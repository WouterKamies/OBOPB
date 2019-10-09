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
private:
	Book* book;
};

