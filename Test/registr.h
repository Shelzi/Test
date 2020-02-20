#pragma once
#include <iostream>

void registr() {
	using namespace std;
	cout << "Import letter = ";
	char letter;
	cin >> letter;
	letter = letter - 32;
	cout << letter;
}