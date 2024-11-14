#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	system("chcp 1251 > nul");
	short r;
	do {
		cout << "Въведете цяло число между 1 и 15 включително: ";
		cin >> r;
	} while (r > 15 || r < 1);

	for (int j = 1; r > 0; r--, j++) {
		cout << setw(r + 1) << setfill('*') << '|' << setw(j) << setfill('#') << "" << endl;
	}
}