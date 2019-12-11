#include "Water.h"



void Water::cupMenu()
{
	std::cout << "What do you want to do?\n1) Collect Water\n2) Put Water In\n3) Change Tempreture\n4) Go Back" << std::endl;
	std::cin >> userCupsChoice;

	switch (userCupsChoice)
	{
	case 1:
		CollectWater();
		break;

	case 2:
		putWaterIn();
		break;

	case 3:
		ChangeTemprature();
		break;

	default:
		break;
	}
}

void Water::CollectWater()
{
	std::cout << "How many cups of water would you like to get? You currently have " << cupsCarried << " cups" << std::endl;
	std::cin >> cupsCarried;
	Cups += cupsCarried;
}

void Water::putWaterIn()
{
	if (Cups <= 0)
	{
		std::cout << "Sorry, you don't have any cups to put in the coffee maker" << std::endl;
	}
	else 
	{
		std::cout << "How many cups of water would you like to put in the coffee machine? You currently have " << Cups << " cups" << std::endl;
		std::cin >> cupsCarried;
		if (cupsCarried > Cups)
		{
			std::cout << "Sorry, you don't have enough cups to put into the coffee maker." << std::endl;
		}
		else 
		{
			Cups -= cupsCarried;
		}
	}
}

void Water::ChangeTemprature()
{
	std::cout << "How many ticks would you like to heat up the water by?" << std::endl;
	std::cin >> changeTempTicks;
	waterTemp += 10*changeTempTicks;
}


