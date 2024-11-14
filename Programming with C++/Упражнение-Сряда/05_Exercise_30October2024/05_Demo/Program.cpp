#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	
	const int LR1{ 3 }, LC1{ 5 };
	long t1[LR1][LC1]{
		{1,2, 3,4,5},
		{-1,-2}
	};

	for (int r{}; r < LR1; r++) {
		for (int c{}; c < LC1; c++) cout << setw(4) << t1[r][c];
		cout << endl;
	}

	const int LC2{ 7 };
	long t2[][LC2]{
		{1,2,3,4,5},
		{-1,-2}
	};

	const int LR2{ sizeof(t2) / sizeof(t2[0]) };
	for (auto row : t2) {
		cout << "sizeof(row) -> " << sizeof(row) << endl
			<< "typeid(row).name() -> " << typeid(row).name() << endl
			<< "typeid(t2[0]).name() -> " << typeid(t2[0]).name() << endl;
	}
	for (auto& row : t2) {
		for (auto elm : row) cout << setw(4) << elm;
		cout << endl;
	}

	cout << "---------------\n";
	for(auto & row : t2)
		for (auto& elm : row) elm = elm * 10 + 4;
	for (auto & row : t2) {
		for (auto elm : row) cout << setw(4) << elm;
		cout << endl;
	}
}