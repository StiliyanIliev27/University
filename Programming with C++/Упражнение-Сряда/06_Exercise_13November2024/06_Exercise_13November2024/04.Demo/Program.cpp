#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	string s;
	cout << "�������� ��� ��� ���� ������: ";
	cin >> s;
	cout << "  �������� ���: \"" << s << "\"n";
	getline(cin, s); //���������� �� ������ �� ������������
	cout << "�������� ��� (���� � ���������): ";
	getline(cin, s); 
	cout << "  �������� ���: \"" << s << "\"\n";
}