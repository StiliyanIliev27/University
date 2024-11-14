#include <iostream>
#include <string>
using namespace std;
int countSubs(const string& str, const string& sub) {
	int cnt{};
	size_t pos = str.find(sub);
	while (pos != string::npos) {
		cnt++;
		pos = str.find(sub, pos + 1);
	}
	return cnt;
}
int main() {
	system("chcp 1251 > nul");
	string str, sub;
	cout << "Въведете съдържащ низ (може с интервали): ";
	getline(cin, str);
	cout << "Въведете търсен подниз (може с интервали): ";
	getline(cin, sub);
	cout << "Брой на местата в низа \"" << str
		<< "\",\n където се среща като подниз \"" << sub << "\": "
		<< countSubs(str, sub) << "\n\n\n";
}