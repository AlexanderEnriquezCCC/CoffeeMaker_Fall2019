#include "MakeCoffee.h"

void MakeCoffee::printMenu()
{
	std::cout << "What would you like view?\n1) Beans\n2) Water\n3) Make Coffee" << std::endl;
	std::cin >> playerInput;
	switch (playerInput)
	{
	case 1:

		break;

	case 2:
		water->cupMenu();
		break;

	case 3:
		//if(water->waterTemp == 175 &&)
		break;

	default:
		break;
	}
}
