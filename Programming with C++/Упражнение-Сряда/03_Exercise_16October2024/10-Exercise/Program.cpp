#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	system("chcp 1251 > nul");
	int r;
	do {
		cout << "Въведете брой реда(цяло положително число от 1 до 15): ";
		cin >> r;
	} while (r >= 15 || r <= 1);

	for(int L = 2; r > 0; L++, r--){
		cout << setw(L) << setfill('*') << '|' << setw(r) << setfill('#') << "" << endl;
	}
}