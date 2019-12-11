#pragma once
#include "Water.h"
class MakeCoffee
{
public:
	Water* water = new Water();

	int playerInput;
	int playerCoffeeN; //takes input for how many coffee cups user wants. User wants 4 cups of coffee, beanAmnt == 10*playerCoffeeN, cups == 1*playerCoffeeN

	void printMenu();
};

