
#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dist(-100, 100);
	int size = 0;
	cin >> size;
	cout << endl;
	vector<int> arr;
	for (int i = 0; i < size; i++) {
		int x = dist(gen);
		arr.push_back(x);
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i]<<endl;
	}

	int n = 0, k = 0;
	cin >> n >> k;
	cout << endl;
	arr.erase(arr.begin() + k, arr.begin() + k + n);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}
	
	system("pause");
	return 0;
}
