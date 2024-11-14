#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	int n, oddNumbersCnt{ 0 };
	do {
		cout << "Въведете цяло число (край при точно един делител измежду 2 и 3): ";
		cin >> n;
		oddNumbersCnt += n % 2 ? 1 : 0;
	} while((n % 2 && n % 3) || (n % 2 == 0 && n % 3 == 0));
	cout << "Брой нечетни: " << oddNumbersCnt;
}