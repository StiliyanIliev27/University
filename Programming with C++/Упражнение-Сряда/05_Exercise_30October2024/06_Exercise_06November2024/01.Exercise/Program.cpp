#include<iostream>
using namespace std;
int readCount(long div) {
	if (!div) return -1;
	int cnt{};
	long num;
	do {
		cout << "���� ����� (�� ������ �� �� " << div << "): ";
		cin >> num;
		cnt++;
	} while (num % div);
	return cnt;
}
int main() {
	system("chcp 1251 > nul");
	long d;
	do {
		cout << "�������� ���������� �������: ";
		cin >> d;
	} while(!d);
	long result{ readCount(0) };
	cout << "���� �� �������, ��������� ���� ��������: " << result << endl;	
}