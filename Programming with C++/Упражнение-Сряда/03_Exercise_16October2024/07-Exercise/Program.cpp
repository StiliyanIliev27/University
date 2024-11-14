#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	double sum{ 0 }, n, maxNeg{ 1.0 };
	do {
		cout << "Число (край при отрицателна сума): ";
		cin >> n;
		sum += n;
		if (n < 0 && (1.0 == maxNeg || n > maxNeg)) maxNeg = n;
	} while (sum >= 0);
	cout << "Максимално отрицателно: " << maxNeg << endl;
}