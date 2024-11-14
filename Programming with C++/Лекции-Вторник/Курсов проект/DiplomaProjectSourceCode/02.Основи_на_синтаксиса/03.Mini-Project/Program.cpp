#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul");
    int x = 10;
    int y = 3;
    int sum = x + y;    // Събиране
    int product = x * y; // Умножение
    bool comparison = (x > y); // Проверка дали x е по-голямо от y

    cout << "Сборът на x и y е: " << sum << endl;
    cout << "Произведението на x и y е: " << product << endl;
    cout << "x по-голямо ли е от y? " << boolalpha << comparison << endl;

    return 0;
}