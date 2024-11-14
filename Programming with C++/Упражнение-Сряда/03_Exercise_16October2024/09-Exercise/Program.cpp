#include<iostream>
using namespace std;
int main() {
	system("chcp 1251 > nul");
	
	//string with (initialized with s) doesn't have one byte at the end of the string "abcdef"
	for (char ch : "abcdef"s) cout << " '" << ch << '\'';
	cout << endl;
	
	//"string" without s at the end has one more byte at the end - " " ("abcdef ")
	for (auto ch : "abcdef") cout << " '" << ch << '\'';
	cout << endl;
}