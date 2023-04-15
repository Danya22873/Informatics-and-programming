// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include<random>

using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(-100, 100);
	int size = 0, countOfPair = 0;
	cin >> size;
	int* array = new int[size] {};
	for (int i = 0; i < size; i++) {
		int x = dist(gen);
		array[i] = x;
	}
	for (int i = 0; i < size; i++) {
		cout <<i<<". "<< array[i] << endl;
	}

	for (int i = 0; i < size - 1; i++) {
		if (array[i] == array[i + 1]) {
			countOfPair += 1;
			cout << i<<" - pair under number"<<endl;
		}
	}

	cout << countOfPair;
	system("pause");
	return 0;
}

