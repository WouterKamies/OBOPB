#pragma once
#include <string>
#include "Coin.h"
#include "Special.h"
#include "FiftyCent.h"
#include "Euro.h"

class Machine
{
public:
	void detectCoin(Coin a);
	void detectCoin(FiftyCent b);
	void detectCoin(Euro c);
	void detectCoin(Special d);
};

