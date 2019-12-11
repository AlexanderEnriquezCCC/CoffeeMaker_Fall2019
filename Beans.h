#pragma once
#include <iostream>
class Beans
{
public:
	double groundedBeans;

	int userBeansChoice;
	
	void BeansMenu();
	void GetBeans();
	void GrindBeans();
	void PutGroundBeansIn();

	
private:
	double normalBeans;
	double normalBeansCarried;
	double groundedBeansCarried;

	bool hasGroundBeans;
	bool hasBeans = false;
};

