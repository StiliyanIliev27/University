#include <iostream>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	cout << "Въведете цяло число: ";
	int i;
	cin >> i;
	cout << "  Прочетено число ->" << i << endl;
	char s[10];
	cout << "Въведете низ без бели полета до 9 знака: ";
	cin >> s;
	cout << "  Прочетен низ -> \"" << s << "\"\n";
	cout << "Въведете низ без бели полета до 9 знака: ";
	cin >> s;
	cin.ignore(1);
	cout << "  Прочетен низ -> \"" << s << "\"n";
	cout << "Въведете низ до 9 знака: ";
	cin.getline(s, 10);
	cout << "  Прочетен низ -> \"" << s << "\"n";
	cout << "Въведете низ до 9 знака: ";
	cin.getline(s, 10);
	cout << "  Прочетен низ -> \"" << s << "\"n";
}