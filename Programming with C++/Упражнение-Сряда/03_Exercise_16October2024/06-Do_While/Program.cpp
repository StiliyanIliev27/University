#include<iostream>
using namespace std;
int main(){
	system("chcp 1251 > nul");
	int n;
	do {
		cout << "���� ����� ��� 5 � �� �� ���� �� 3, ���� �� 2: ";
		cin >> n;
	} while (n % 2 == 0 || n % 3 == 0 || n < 5);
	cout << "��������: " << n << endl;

	n = 3;
	do {
		cout << "  " << n;
		n += 3;
	} while (n < 25);
	cout << endl;
	
	n = 2;
	do {
		if (++n >= 25) break;
		if (n % 3) continue;
		cout << " " << n;
	} while (true);
	cout << endl;
}