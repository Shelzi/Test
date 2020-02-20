#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

//d_number = (-50 + rand() % 100) / 10.0;
void fabsForDouble()
{
	using namespace std;
	int length;
	cin >> length;
	double result_number =0;
	srand(time(0));
	for (int i = 0; i < length; i++)
	{
		double temp_number = (-100 + rand() % 200) / 10.0;
		cout << temp_number<< " ";
		if (fabs(temp_number) >= 2.5)
		{
			result_number += temp_number * temp_number;
		}
	}
	cout <<"\n"<< result_number;
}