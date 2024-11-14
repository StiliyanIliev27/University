#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    cout << "Цикъл for: " << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Итерация " << i << endl;
    }

    return 0;
}
