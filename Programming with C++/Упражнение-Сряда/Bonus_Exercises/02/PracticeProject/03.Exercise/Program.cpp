#include <iostream>
#include <string>
using namespace std;

void readArStrs(string ar[], int L) {
	if (!ar || L < 1) return;
	for (int i{}; i < L; i++) {
		cout << "Низ с индекс " << i << ": ";
		getline(cin, ar[i]);
	}
}
void writeArStrs(const string ar[], int L) {
	if (!ar || L < 1) return;
	cout << "Масив от низове (" << L << " на брой):\n";
	for (int i{}; i < L; i++)
		cout << " низ с индекс " << i << ": \"" << ar[i] << "\"\n";
}
void writeElmsWithSub(const string ar[], int L, const string& s) {
	if (!ar || L < 1) cout << "Няма низове с подниз \"" << s << "\".\n";
	else {
		cout << "Низове, съдържащи подниз \"" << s << "\":\n";
		for (int i{}; i < L; i++)
			if (ar[i].find(s) != string::npos)
				cout << " \"" << ar[i] << "\"\n";
		cout << " (край на низовете)\n";
	}
}
int main() {
	system("chcp 1251 > nul");
	int const Len{ 5 };
	string arS[Len];
	readArStrs(arS, Len);
	writeArStrs(arS, Len);
	string sub;
	cout << "Въведете търсен подниз: ";
	getline(cin, sub);
	writeElmsWithSub(arS, Len, sub);
}