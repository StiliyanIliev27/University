#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	int n;
	int oddNumbersCnt = 0;
	do {
		cout << "����, �������� ���� �����: ";
		cin >> n;
		oddNumbersCnt += n % 2 ? 1 : 0;
	} while(n % 2 && n % 3);
	cout << "���� ��������� ������� �����: " << oddNumbersCnt << endl;
}