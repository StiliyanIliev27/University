#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	srand((unsigned)time(nullptr));
	
	const int Len{ 11 };
	long arr[Len];
	for (auto& el : arr)//Запис в масива
		el = rand() % 31 - 10;
	
	for (auto el : arr)//Извеждане на масива
		cout << "  " << el;
	cout << endl;
	
	int cnt{};
	for (int i{ 1 }; i < Len; i++)
		if (arr[i - 1] % 2 && arr[i]) cnt++;

	if (!cnt)
		cout << "Няма двойки съседни нечетни числа!" << endl;
	else {
		cout << "Брой двойки съседни нечетни числа: " << cnt
			<< "Индекси на тези двойки: ";
		for (int i{ 1 }; i < Len; i++)
			if (arr[i - 1] % 2 && arr[i])
				cout << "  " << i - 1 << " , " << i << endl;
		cout << " (kрай на двойките)" << endl;
	}	
}