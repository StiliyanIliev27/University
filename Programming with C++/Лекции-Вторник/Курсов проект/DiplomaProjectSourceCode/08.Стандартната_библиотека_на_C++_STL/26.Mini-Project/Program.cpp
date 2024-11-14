#include <iostream>
#include <vector>
#include <algorithm> // Библиотека за алгоритми
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    vector<int> числа = { 5, 2, 9, 1, 7 };
    sort(числа.begin(), числа.end()); // Сортиране на вектора

    cout << "Сортирани елементи: ";
    for (int num : числа) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
