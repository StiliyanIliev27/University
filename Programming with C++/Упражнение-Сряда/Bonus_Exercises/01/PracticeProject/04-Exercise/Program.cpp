#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	int n, firstOddNumber{ 2 }, evenNumbersCnt{0}, lastOddNumer{ 2 };

	do {
		cout << "����, �������� ���� �����: ";
		cin >> n;
		if (n % 2 == 0)
			evenNumbersCnt++;
		else
			if (firstOddNumber == 2)
				firstOddNumber = lastOddNumer = n;
			else
				lastOddNumer = n;
	} while (evenNumbersCnt < 5 && lastOddNumer == firstOddNumber);
	cout << "���� �� ����������� ����� �����: " << evenNumbersCnt << endl;
	if (firstOddNumber == 2)
		cout << "���� ��������� ������� �����.\n";
	else
		if (firstOddNumber == lastOddNumer)
			cout << "��������� ������� �����: " << firstOddNumber << endl;
		else cout << "�������� ��������� ������� �����: " << firstOddNumber
			<< " , " << lastOddNumer << endl;
}