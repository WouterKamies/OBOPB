#include "pch.h"
#include <string>
#include <iostream>
#include "Coin.h"
#include "FiftyCent.h"
#include "Euro.h"
#include "Special.h"

using namespace std;

int main()
{
	Coin coin;
	FiftyCent fiftyCent;
	Euro euro;
	Special coffeeCoin;

	cout << "Throw in coins here" << endl;
	cout << "Only accepting coins 1, 2 and 3" << endl;
	cout << "1 = 50 cent coin" << endl;
	cout << "2 = 1 Euro" << endl;
	cout << "3 = Coffee coin" << endl;
	cout << "Coffee prices:" << endl;
	cout << "Filter coffee = 50 cent / 1 coffee coin" << endl;
	cout << "Cappuchino = 1 euro / 1 coffee coin" << endl;
	cout << "greek coffee = 1 coffee coin" << endl;

	std::string coinInput;
	getline(cin, coinInput);

	if (coinInput == "1") {
		fiftyCent.getWorth();
		cout << "Choose your coffee:" << endl;
		cout << "1. Filter Coffee" << endl;
	 }
	else if (coinInput == "2") {
		euro.getWorth();
		cout << "Choose your coffee:" << endl;
		cout << "1. Filter Coffee" << endl;
		cout << "2. Cappuchino" << endl;
	 }
	else if (coinInput == "3") {
		coffeeCoin.getWorth();
		cout << "Invallid coin" << endl;
		cout << "1. Filter Coffee" << endl;
		cout << "1. Cappuchino" << endl;
		cout << "1. Greek Coffee" << endl;
	}
	else
	{
		cout << "Invallid coin" << endl;
	}

	return 0;
}

