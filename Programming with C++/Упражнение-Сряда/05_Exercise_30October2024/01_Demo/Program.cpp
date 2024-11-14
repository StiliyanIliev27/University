#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	srand((unsigned)time(nullptr));
	const int Len{ 11 };
	long ar[Len];

	for (int i{}; i < Len; i++)
		ar[i] = rand() % 31 - 10;
	
	cout << "Масив: ";
	for (int i{}; i < Len; i++)
		cout << ar[i] << " ";

    int cntOdd{ 0 };
	for (auto el : ar)
		cntOdd += el % 2 ? 1 : 0;
	cout << "Брой нечетни числа в масива: " << cntOdd << endl;
	
	cout << "Индекси на нечетни числа в масива: ";
	for (int i{}; i < Len; i++)
		if (ar[i] % 2) cout << i << " ";
	cout << endl;


	long maxNumber{ LONG_MIN };
	for (int i{}; i < Len; i++)
		if (ar[i] > maxNumber) maxNumber = ar[i];
	cout << "Максимално число в масива: " << maxNumber << endl;

	long maxNumbers{ 0 };
	for (int i{}; i < Len; i++)
		if (ar[i] == maxNumber) maxNumbers++;
	cout << "Брой на максималните елементи в масива: " << maxNumbers << endl;


	long minNumber{ LONG_MAX };
	int minNumbers{ 0 };
	for (int i{}; i < Len; i++) {
		if (ar[i] < minNumber) {
			minNumber = ar[i];
			minNumbers = 1;
		} else if (minNumber == ar[i])
			minNumbers++;
	}		
	cout << "Минимално число в масива: " << minNumber << endl
		<< "Брой на минималните елементи в масива: " << minNumbers;
}