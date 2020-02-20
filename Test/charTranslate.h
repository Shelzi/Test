#pragma once
#include <iostream>

void charTranslate() {
	using namespace std;
	cout << "Imput number for char translate = ";
	unsigned short int number;
	cin >> number;
	cout << char(number);
}