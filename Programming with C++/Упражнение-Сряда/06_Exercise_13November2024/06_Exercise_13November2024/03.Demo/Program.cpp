#include <iostream>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	cout << "�������� ���� �����: ";
	int i;
	cin >> i;
	cout << "  ��������� ����� ->" << i << endl;
	char s[10];
	cout << "�������� ��� ��� ���� ������ �� 9 �����: ";
	cin >> s;
	cout << "  �������� ��� -> \"" << s << "\"\n";
	cout << "�������� ��� ��� ���� ������ �� 9 �����: ";
	cin >> s;
	cin.ignore(1);
	cout << "  �������� ��� -> \"" << s << "\"n";
	cout << "�������� ��� �� 9 �����: ";
	cin.getline(s, 10);
	cout << "  �������� ��� -> \"" << s << "\"n";
	cout << "�������� ��� �� 9 �����: ";
	cin.getline(s, 10);
	cout << "  �������� ��� -> \"" << s << "\"n";
}