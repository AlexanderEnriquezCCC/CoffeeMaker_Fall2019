#include "Beans.h"

void Beans::BeansMenu()
{
	std::cout << "What would you like to do?\n1) Get Beans\n2) Grind Beans\n3) Put Beans In\n4) Go Back" << std::endl;
	std::cin >> userBeansChoice;

	switch (userBeansChoice)
	{
	case 1:
		GetBeans();
		break;

	case 2:
		GrindBeans();
		break;

	case 3:
		PutGroundBeansIn();
		break;

	case 4:
		break;

	default:
		std::cout << "That is not an option" << std::endl;
		BeansMenu();
		break;
	}
}

void Beans::GetBeans()
{
	std::cout << "How many beans would you like to get? (45 beans = 10 oz of ground beans)\n" << "You have " << normalBeansCarried << " beans" << std::endl;
	std::cin >> normalBeansCarried;
	normalBeans += normalBeansCarried;
	hasBeans = true;
}

void Beans::GrindBeans()
{
	if (hasBeans == false)
	{
		std::cout << "You have no beans to grind" << std::endl;
	}
	else
	{
		std::cout << "How many beans would you like to grind? You currently have " << normalBeans << " beans you can grind." << std::endl;
		std::cin >> normalBeansCarried;
		if (groundedBeans < normalBeansCarried)
		{
			std::cout << "You do not have enough beans to grind" << std::endl;
		}
		else
		{
			groundedBeans = normalBeansCarried / 4.5;
			normalBeans -= normalBeansCarried;
		}
	}
}

void Beans::PutGroundBeansIn()
{
	if (hasGroundBeans == false)
	{
		std::cout << "You have no ground beans to put into the coffee maker" << std::endl;
	}
	else
	{
		std::cout << "How much ground bean would you like to put into the coffee maker? You have " << groundedBeans << "oz grounded beans" << std::endl;
		std::cin >> groundedBeansCarried;
		if (groundedBeans < groundedBeansCarried)
		{
			std::cout << "You do not have enough ground beans to put into the coffee maker." << std::endl;
		}
		else
		{
			groundedBeans -= groundedBeansCarried;
		}
	}
}
