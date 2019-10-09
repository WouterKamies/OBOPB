#pragma once
#include <string>

class Book
{
public:
	Book();
	~Book();
	Book(std::string type);
	std::string type = "(Unknown)";
};

