#pragma once
#include <iostream>
#include "getCountsOfDigits.h"

void bigSmallNumber() 
{
	using namespace std;
	int userNumber, largeNumber, smallNumber;
	bool firstIteration = true;

	std::cout << "Imput number = ";
	std::cin >> userNumber;

	int length = getCountsOfDigits(userNumber);

	for (int i = length; i > 0; i--)
	{
		int powNumber1 = pow(10, i - 1);
		int powNumber2 = pow(10, i);
		int tempNumber = (userNumber % powNumber2 - userNumber % powNumber1) / pow(10, i - 1);

		if (firstIteration == true || length == 1)
		{
			largeNumber = tempNumber;
			smallNumber = tempNumber;
			firstIteration = false;
			continue;
		}

		if (tempNumber > largeNumber)
		{
			largeNumber = tempNumber;
		} 
		else if (tempNumber < smallNumber)
		{
			smallNumber = tempNumber;
		}
		else 
		{
			continue;
		}
	}
	cout << largeNumber << "  " << smallNumber;
}