// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	string str; // ��� ������������ "����������" ����
	int n, x, answ = 0;
	cout << "������� N: ";
	cin >> n;
	if (n > 13 || n < 5 || n % 2 == 0)
	{
		cout << "������! N �� �������� ������� ������.";
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fin >> x;
			if (j < n - i - 1 && j > i) // ������� "����������" ����� � �������� �� ��� �� �������
			{
				if (x % 2 != 0) // ���� ��������
				{
					if (x > answ)//���� x ������ �������������, �� ������������ = x
						answ = x;
				}
				cout << "[" << x << "]\t"; // ����� ���������� ��������
			}
			else // ������� �������� ������� �� ������������� �������
				cout << x << "\t";
		}
		getline(fin, str); // ����������� "����������" ����� 
		cout << endl; // ������� �� ����� ������
	}
	if (answ == 0)
		fout << "����� �� �������";
	else
		fout << answ;
	fin.close();
	fout.close();
	system("pause");
}