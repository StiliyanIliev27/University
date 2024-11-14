#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	long long n1, n2;
	cout << "Цяло ненулево число: ";
	cin >> n1;

	cout << "Цяло число: ";
	cin >> n2;

	cout << "НОД(" << n1 << ";" << n2 << ") = ";
	while (long long r{ n1 % n2 }) {
		n1 = n2;
		n2 = r;
	}
	n2 = abs(n2);
	cout << n2 << endl;
}