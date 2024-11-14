#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	int n, firstOddNumber{ 2 }, evenNumbersCnt{0}, lastOddNumer{ 2 };

	do {
		cout << "Моля, въведете цяло число: ";
		cin >> n;
		if (n % 2 == 0)
			evenNumbersCnt++;
		else
			if (firstOddNumber == 2)
				firstOddNumber = lastOddNumer = n;
			else
				lastOddNumer = n;
	} while (evenNumbersCnt < 5 && lastOddNumer == firstOddNumber);
	cout << "Брой на прочетените четни числа: " << evenNumbersCnt << endl;
	if (firstOddNumber == 2)
		cout << "Няма прочетено нечетно число.\n";
	else
		if (firstOddNumber == lastOddNumer)
			cout << "Прочетено нечетно число: " << firstOddNumber << endl;
		else cout << "Различни прочетени нечетни числа: " << firstOddNumber
			<< " , " << lastOddNumer << endl;
}