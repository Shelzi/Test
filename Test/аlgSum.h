#pragma once
#include <iostream>
#include <cmath> 

void algSum() {
	using namespace std;

	int numOfX;
	double y = 0;

	cout << "Num of X: "; cin >> numOfX;

	double **ptrarray= new double*[numOfX];
	for (int i = 0; i < numOfX; i++)
	{
		ptrarray[i] = new double[4];

		cout << "Input fore X" << i + 1 << "\nZ = "; cin >> ptrarray[i][0];
		cout << "B = "; cin >> ptrarray[i][1];
		cout << "A = "; cin >> ptrarray[i][2];
		cout << "Betta = "; cin >> ptrarray[i][3];
	}
	//Найти Y, если Y = X1 + X2 + … + Xn,   X = Z^3 - B + A^2 / tg^2?
	for (int i = 0; i < numOfX; i++)
	{
		y += pow(ptrarray[i][0], 3) - ptrarray[i][1] + pow(ptrarray[i][2], 2) / pow(tan(ptrarray[i][3]), 2);
	}
	cout << y;
	for (int i = 0; i < numOfX; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			delete[] ptrarray[i];
		}
		delete[] ptrarray;
	}
}