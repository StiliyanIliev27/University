#include <iostream>
#include <string>
using namespace std;
void viewStrRelation(const string& s1, const string& s2) {
	cout << '"' << s1 << "\" ";
	int rel{ s1.compare(s2) };
	if (rel < 0) cout << '<';
	else if (rel) cout << '>';
	else cout << '=';
	cout << " \"" << s2 << "\"\n";
}
int main() {
	system("chcp 1251 > nul");
	string s1, s2;
	cout << "Въведете 1-и низ (може с интервали): ";
	getline(cin, s1);
	cout << "Въведете 2-и низ (може с интервали): ";
	getline(cin, s2);
	viewStrRelation(s1, s2);
}