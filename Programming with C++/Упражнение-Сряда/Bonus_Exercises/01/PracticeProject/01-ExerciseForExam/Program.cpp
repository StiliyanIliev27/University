#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	long long currentNumber, minOddNumber{ LLONG_MAX }, lastEvenNumber{ 0LL };
	short oddNumbersCnt{ 0 }, diffEvenNumbersCnt{ 0 };
	bool isOddNumber;

	do {
		cout << "����, �������� ���� �����: ";
		cin >> currentNumber;
		isOddNumber = currentNumber % 2 ? true : false;

		if (isOddNumber)
			oddNumbersCnt++;
		else if (!isOddNumber && currentNumber != lastEvenNumber) {
			diffEvenNumbersCnt++;
			lastEvenNumber = diffEvenNumbersCnt == 2 ? lastEvenNumber : currentNumber;
		}

		minOddNumber = isOddNumber && currentNumber < minOddNumber ? currentNumber : minOddNumber;

	} while (diffEvenNumbersCnt < 2);

	cout << "�������� ��������� ����� �����: " << lastEvenNumber << " " << currentNumber << endl
		<< "���� �� ����������� ������� �����: " << oddNumbersCnt << endl
		<< "��������� ��������� ������� �����: " << minOddNumber << endl;
}