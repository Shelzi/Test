#pragma once
#include "getCountsOfDigits.h"
#include <iostream>

void digit() {
	using namespace std;
	int number;
	std::cout << "Imput number = ";
	std::cin >> number;
	int length = getCountsOfDigits(number);
	for (int i = length, j = 1; i > 0; i--, j++)
	{
		int pownumber1 = pow(10, i - 1);
		int pownumber2 = pow(10, i);
		cout << j << " = " << (number % pownumber2 - number % pownumber1) / pow(10, i - 1) << endl;
	}
}