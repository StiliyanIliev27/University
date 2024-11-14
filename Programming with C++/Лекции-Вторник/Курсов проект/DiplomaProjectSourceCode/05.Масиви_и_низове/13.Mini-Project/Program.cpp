#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int числа[5] = { 1, 2, 3, 4, 5 };

    cout << "Елементите на масива са: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "числа[" << i << "] = " << числа[i] << endl;
    }

    return 0;
}