#pragma once
#include <iostream>

void powButHow()
{
	using namespace std;
	int number, n, result;
	cout << "Imput number = "; cin >> number;
	cout << "Imput degree = "; cin >> n;
	result = number;
	for (int i = 1; i < n; i++)
	{
		result *= number;
	}
	cout << result;
}
