#include <iostream>
using namespace std;

int факториел(int n) {
    if (n <= 1) {
        return 1; // Базов случай: факториелът на 0 или 1 е 1
    }
    else {
        return n * факториел(n - 1); // Рекурсивен случай
    }
}

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int число;
    cout << "Въведете число: ";
    cin >> число;

    cout << "Факториелът на " << число << " е: " << факториел(число) << endl;

    return 0;
}