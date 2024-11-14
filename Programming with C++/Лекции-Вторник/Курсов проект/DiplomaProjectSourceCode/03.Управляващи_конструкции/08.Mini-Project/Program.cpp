#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ќсигур€ва правилно изобраз€ване на кирилица

    int бро€ч = 1;
    cout << "÷икъл while: " << endl;
    while (бро€ч <= 5) {
        cout << "»тераци€ " << бро€ч << endl;
        бро€ч++;
    }

    return 0;
}