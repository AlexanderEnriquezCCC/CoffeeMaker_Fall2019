#pragma once
#include <string>
class Water
{
public:
	bool hasWater;
	bool waterIn;

	int waterTemprature;
	int waterAmount;
	int heldWaterAmount;

	void takeWater();
	void putWaterIn();
	void heatWater();

private:
	std::string str;
};

