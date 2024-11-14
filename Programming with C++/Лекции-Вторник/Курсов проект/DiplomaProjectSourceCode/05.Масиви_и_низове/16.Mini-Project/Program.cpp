#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    string текст = "Програмиране";
    cout << "Текстът е: " << текст << endl;

    // Промяна на първия символ
    текст[0] = 'п';
    cout << "Модифициран текст: " << текст << endl;

    return 0;
}