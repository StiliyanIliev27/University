#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	srand((unsigned)time(nullptr));
	int Len;
	do {
		cout << "Брой от 1 до 15: ";
		cin >> Len;
	} while (Len < 1 || 15 < Len);

	const int arLen{ Len };
	long * ar = new long[arLen];
	for (int i{}; i < arLen; i++)
		ar[i] = rand() % 10 * 2 + 1; //нечетно от 1 до 19

	for (long* p{ ar }; p - ar < Len; p++)
		cout << "  " << *p;
	cout << endl;

	for (long* p{ ar + Len - 1 }; p >= ar; p--)
		cout << "  " << *p;
	cout << endl;

	delete[] ar;
	ar = nullptr;
}