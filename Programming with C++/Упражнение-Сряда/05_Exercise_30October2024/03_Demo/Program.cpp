#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	long arr[]{ 1,2,3,4,-3,-2,-1,2,4,4,-4,4 };
	const int Len{ sizeof(arr) / sizeof(*arr) };

	for (long n : arr) 
		cout << "  " << n;
	cout << endl;

	cout << "������� �����: ";
	long s;
	cin >> s;
	int first{};
	while (first < Len && s != arr[first]) 
		first++;

	if (first == Len) 
		cout << "���� ����� �������.\n";
	else {
		int Last{ Len - 1 };
		while (arr[Last] != s) Last--;
		cout << "������ �� 1-� ����� �������: " << first
			<< "\n������ �� �������� ����� �������: " << Last << endl;
	}
}