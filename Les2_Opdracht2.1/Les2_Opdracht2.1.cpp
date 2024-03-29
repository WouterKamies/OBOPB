#include "pch.h"
#include <iostream>
#include <fstream>


#define FILE "D://HKU//Jaar 2//OPOB//Repo//Les2_Opdracht2.1//opdracht_1_read.txt"
#define OUTFILE "D://HKU//Jaar 2//OPOB//Repo//Les2_Opdracht2.1//opdracht_1_write.txt"

int countCharactersInFile() {
	std::ifstream in_stream;

	in_stream.open(FILE);
	if (!in_stream) {
		std::cout << "probleem bij openen file" << std::endl;
		exit(1);
	}
	
	std::ofstream out_stream;
	out_stream.open(OUTFILE);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	bool skip;

	//int count = 0;
	char ch;
	in_stream >> std::noskipws;
	in_stream.get(ch);

	while (!in_stream.eof()) {
		//count++;
		in_stream >> (ch);

		skip = !skip;

		if (!skip) {
			out_stream << ch;
		}
	}
	in_stream.close();

	out_stream.close();

	//std::cout << count << " tekens in het bestand" << std::endl;
	//std::cout << "----------------------" << std::endl;

	return 0;
	//return count;
}
/*
char getCharacterAtPosition(int number) {
	char ch;
	std::ifstream fileInput;

	fileInput.open(OUTFILE);
	for (int i = 0; i < number; i++) {
		fileInput.get(ch);
	}
	fileInput.close();
	return ch;
}

int main() {
	int count;

	count = countCharactersInFile();

	for (int number = count; number > 0; number--) {
		std::cout << getCharacterAtPosition(number);
	}

	char pietje;
	std::cin >> pietje;
	return 0;
}
*/