// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <string>


using namespace std;

float func(float x)
{
	if (x > 2.5) return x * cbrt(x - 2.5);
	if (x == 2.5) return sin(2.5 * x);
	if (x < 2.5) return pow(exp(1), -2.5*x) * cos(2.5*x);
	return 0;
}

string removeVowels(string str)
{
	string vowels = "aeiouAEIOU";
	string result = "";
	for (int i = 0; i < str.length(); i++) {
		bool isVowel = false;
		for (int j = 0; j < vowels.length(); j++) {
			if (str[i] == vowels[j]) {
				isVowel = true;
				break;
			}
		}
		if (!isVowel) {
			result += str[i];
		}
	}
	return result;
}
int main()
{
	//Задание 1
	cout << "zadanie 1"<<endl;
	cout << endl;
	cout << "x" << "	" << "y"<<endl;
	for (float i = 1; i <= 5; i += 0.5)
	{
		cout << i << "	" << func(i) << endl;
	}
	cout << endl;
	//Задание 1



	//Задание 2
	cout << "zadanie 2"<<endl;
	string vowels = "aeiouyAEIOUY";
	string str="abcdefge";
	string str1 = removeVowels(str);
	cout << str1<<endl;
	//Задание 2
	
	double a, b, c, d, e;
	cout << "Vvedite dliny 5 storon: ";
	cin >> a >> b >> c >> d >> e;

	double sides[5] = { a, b, c, d, e };
	bool triangleExists = false;

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 4; j++) {
			for (int k = j + 1; k < 5; k++) {
				if (sides[i] + sides[j] > sides[k] && sides[i] + sides[k] > sides[j] && sides[j] + sides[k] > sides[i]) {
					triangleExists = true;
					cout << "A triangle can be possible with side lengths " << sides[i] << ", " << sides[j] << ", and " << sides[k] << "." << endl;
				}
			}
		}
	}

	if (!triangleExists)
		cout << "Triangle is impossible" << endl;

	

}

