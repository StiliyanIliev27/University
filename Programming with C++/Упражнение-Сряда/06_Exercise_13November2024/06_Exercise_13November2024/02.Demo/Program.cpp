#include <iostream>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	char const arS[]{ "uvw" };

	cout << "typeif(\"uvw\").name() -> " << typeid("uvw").name() << endl
		<< "typeif(arS).name() -> " << typeid(arS).name() << endl
		<< "typeif(\"uvw\"s).name() -> " << typeid("uvw"s).name() << endl
		<< "typeif(string).name() -> " << typeid(string).name() << endl;

	char c1{}, c2{ '#' }, ar[]{ 'u', 'v', 'w' }, c3{ '=' }, c4{};
	cout << " arS -> \"" << arS << "\"n"
		<< "\"uvw\" -> \"" << "uvw" << "\"n"
		<< "ar -> " << ar << "\n";
}