// ConsoleApplication1.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"


#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	ofstream fout("out.txt");
	ifstream fin("in.txt");
	string str; // дл€ отбрасывани€ "оставшихс€" цифр
	int n, x, answ = 0;
	cout << "¬ведите N: ";
	cin >> n;
	if (n > 13 || n < 5 || n % 2 == 0)
	{
		cout << "ќшибка! N не подходит условию задачи.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fin >> x;
			if (j < n - i - 1 && j > i) // выводим "помеченные" цифры и отбираем из них по условию
			{
				if (x % 2 != 0) // если нечетное
				{
					if (x > answ)//если x больше максимального, то максимальное = x
						answ = x;
				}
				cout << "[" << x << "]\t"; // вывод отобранных значений
			}
			else // выводим значение которые не удовлетвор€ют условию
				cout << x << "\t";
		}
		getline(fin, str); // отбрасываем "оставшиес€" цифры 
		cout << endl; // переход на новую строку
	}
	if (answ == 0)
		fout << "„исло не найдено";
	else
		fout << answ;
	fin.close();
	fout.close();
	system("pause");
}