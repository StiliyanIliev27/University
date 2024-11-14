#include<iostream>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	int w, x, y, z, f;
	cout << "Въведете четири целочислени числа(w, x, y, z): ";
	cin >> w >> x >> y >> z;
	switch ((w % 2) + (x % 2) + (y % 2) + (z % 2))
	{
		default: f = w - x + y - z;
		case 1: f = w * (x + y + z); break;
		case 2: f = (w + x) * (y + z); break;
		case 3: f = (w + x + y) * z; break;
		case 4: f = w + x + y + z; break;
	}
	cout << "F(" << w << ";" << x << ";" << y << ";" << z << ")=" << f << endl;
}