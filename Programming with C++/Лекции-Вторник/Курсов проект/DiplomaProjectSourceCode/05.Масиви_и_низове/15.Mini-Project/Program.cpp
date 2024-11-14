#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    string име;
    cout << "Въведете вашето име: ";
    getline(cin, име); // Чете цял ред от входа

    cout << "Здравей, " << име << "!" << endl;

    return 0;
}
