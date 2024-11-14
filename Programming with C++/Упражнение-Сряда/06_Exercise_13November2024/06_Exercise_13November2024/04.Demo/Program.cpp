#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	string s;
	cout << "Въведете низ без бели полета: ";
	cin >> s;
	cout << "  Прочетен низ: \"" << s << "\"n";
	getline(cin, s); //изчистване на буфера на клавиатурата
	cout << "Въведете низ (може с интервали): ";
	getline(cin, s); 
	cout << "  Прочетен низ: \"" << s << "\"\n";
}