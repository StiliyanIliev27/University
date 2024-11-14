#include<iostream>
using namespace std;
void f() {
	cout << "Въведете число (до нула): ";
	double n;
	cin >> n;
	if(n) f();
	if (!n) cout << endl;
	cout << " " << n;
}
int main() {
	system("chcp 1251 > nul");
	f();
	cout << "\n\n\n";
}