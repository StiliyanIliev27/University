#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	const int rL{ 3 }, cL{ 7 }, w{ 5 };
	long t[rL][cL], * p, (*arP)[cL];
	cout << "typeid(p).name() -->> " << typeid(p).name() << endl
		<< "typeid(t[0]).name() -->> " << typeid(t[0]).name() << endl
		<< "typeid(*arP).name() -->> " << typeid(*arP).name() << endl
		<< "typeid(arP).name() -->> " << typeid(arP).name() << endl
		<< "typeid(t).name() -->> " << typeid(t).name() << endl;

	p = t[0];
	arP = t;
	arP[0][1] = 123;

	for (int r{}; r < rL; r++)
		for (int c{}; c < cL; c++)
			arP[r][c] = r * 10 + c;
	for (int r{}; r < rL; r++)
	{
		for (int c{}; c < cL; c++)
			cout << setw(w) << t[r][c];
		cout << endl;
	}
}