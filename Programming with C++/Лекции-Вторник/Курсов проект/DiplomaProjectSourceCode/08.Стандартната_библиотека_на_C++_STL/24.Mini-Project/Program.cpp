#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    vector<int> числа = { 1, 2, 3, 4, 5 };
    числа.push_back(6); // Добавяне на нов елемент

    cout << "Елементите във вектора са: ";
    for (int i = 0; i < числа.size(); i++) {
        cout << числа[i] << " ";
    }
    cout << endl;

    return 0;
}
