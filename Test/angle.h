#pragma once
#include <iostream>
#include <cmath>

void angleHorizon()
{
	using namespace std;
	int time, speed;
	const double g = 9.80665, pi = 3.14159265358979323846;
	cout << "Imput t = "; cin >> time;
	cout << "Imput v = "; cin >> speed;
	cout << "Result angle = " << (asin( (g * time) / (2 * speed) ) * 180)/pi;
}