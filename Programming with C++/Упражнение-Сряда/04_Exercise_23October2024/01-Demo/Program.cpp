#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");

	//1.

	/*int i{ 112 }, & r{ i }, j{ -88 };
	cout << "i -> " << i << "\nj -> " << j << "\nr -> " << r << endl;
	r = -76543;
	cout << "i -> " << i << "\nj -> " << j << "\nr -> " << r << endl;
	r = j;
	j = 100123;
	cout << "i -> " << i << "\nj -> " << j << "\nr -> " << r << endl;
	int&& r2{ 1 << 4 };
	cout << "r2 -> " << r2 << endl;*/


	//2.

	/*int i{ 111 }, j{ -88 };
	for (int k{}; k < 2; ++k) {
		int& ref{ k ? j : i };
		cout << "ref -->> " << ref << endl;
	}*/

	//3.

	/*cout << "Въведете низ от малки български букви: ";
	string s;
	cin >> s;
	cout << "s -->> \"" << s << "\"\n";
	for(auto& ch : s)
		switch (ch) {
			case 'я': ch = 'б'; break;
			case 'ю': ch = 'а'; break;
			default: ch += 2;
		}

	cout << "s -->> \"" << s << "\"\n";
	for (auto& ch : s)
		switch (ch) {
		case 'б': ch = 'я'; break;
		case 'а': ch = 'ю'; break;
		default: ch -= 2;
		}
	cout << "s -->> \"" << s << "\"\n";*/
}