#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	system("chcp 1251 > nul");
	short s, z;//spaces, stars
	char l;// letter
	
	cout << "Моля, въведете брой на интервалите, звездите и латинска буква: " << endl;
	cin >> s >> z >> l;

	s++;
	string ltr{ ""s + l + l };
	for (int i = 1; s > 0; i++, s--) {
		cout << setw(i) << '#' << setw(s) << '|'
			<< (i % 2 ? right : left) << setfill('*') << setw(z) << ltr << '|'
			<< setfill(' ') << right << setw(i) << '#' << endl;
	}
}