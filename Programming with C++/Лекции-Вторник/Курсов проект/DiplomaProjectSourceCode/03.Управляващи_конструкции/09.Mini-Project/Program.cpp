#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ќсигур€ва правилно изобраз€ване на кирилица

    int бро€ч = 1;
    cout << "÷икъл do-while: " << endl;
    do {
        cout << "»тераци€ " << бро€ч << endl;
        бро€ч++;
    } while (бро€ч <= 5);

    return 0;
}