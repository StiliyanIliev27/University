#include <iostream>
#include <string>
using namespace std;

void readArStrs(string ar[], int L) {
	if (!ar || L < 1) return;
	for (int i{}; i < L; i++) {
		cout << "��� � ������ " << i << ": ";
		getline(cin, ar[i]);
	}
}
void writeArStrs(const string ar[], int L) {
	if (!ar || L < 1) return;
	cout << "����� �� ������ (" << L << " �� ����):\n";
	for (int i{}; i < L; i++)
		cout << " ��� � ������ " << i << ": \"" << ar[i] << "\"\n";
}
void writeElmsWithSub(const string ar[], int L, const string& s) {
	if (!ar || L < 1) cout << "���� ������ � ������ \"" << s << "\".\n";
	else {
		cout << "������, ��������� ������ \"" << s << "\":\n";
		for (int i{}; i < L; i++)
			if (ar[i].find(s) != string::npos)
				cout << " \"" << ar[i] << "\"\n";
		cout << " (���� �� ��������)\n";
	}
}
int main() {
	system("chcp 1251 > nul");
	int const Len{ 5 };
	string arS[Len];
	readArStrs(arS, Len);
	writeArStrs(arS, Len);
	string sub;
	cout << "�������� ������ ������: ";
	getline(cin, sub);
	writeElmsWithSub(arS, Len, sub);
}