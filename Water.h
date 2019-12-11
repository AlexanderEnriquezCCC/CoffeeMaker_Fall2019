#pragma once
#include <stdio.h>
#include <iostream>

class Water
{
public:
	int Cups;
	int waterTemp = 75;
	int cupsInCoffeeMaker;

	int userCupsChoice;

	bool hasCups = false;
	
	void cupMenu();
	void CollectWater(); // ask how many cups to get
	void putWaterIn();
	void ChangeTemprature();

private:
	int cupsCarried;
	int changeTempTicks;
};

