#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int размер;
    cout << "Въведете размер на масива: ";
    cin >> размер;

    int* масив = new int[размер]; // Заделяне на памет за масив

    for (int i = 0; i < размер; i++) {
        масив[i] = i * 2; // Запълване на масива
    }

    cout << "Елементите на масива са: " << endl;
    for (int i = 0; i < размер; i++) {
        cout << масив[i] << " ";
    }
    cout << endl;

    delete[] масив; // Освобождаване на паметта за масива
    масив = nullptr;

    return 0;
}
