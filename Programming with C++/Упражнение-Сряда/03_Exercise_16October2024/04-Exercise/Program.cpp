#include<iostream>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	short n, d{ 2 };
	cout << "�������� ���� ���� ����� � �� 4 �����: ";
	cin >> n;
	if (n % 2) d = 3;
	else d = 2;
	while (n % d) d += 2;
	cout << "���-����� ������� �� 1:" << d;
}