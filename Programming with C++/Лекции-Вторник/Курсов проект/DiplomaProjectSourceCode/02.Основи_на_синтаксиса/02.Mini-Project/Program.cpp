#include <iostream>
using namespace std; // Използваме библиотекатата "std", за да не повтаряме "std::" надолу по кода

int main() {
    system("chcp 1251 > nul");
    int number = 10;          // Цяло число
    float decimal = 5.7;      // Число с плаваща запетая
    double pi = 3.141592653;  // Число с двойна точност
    char letter = 'C';        // Символ
    bool isTrue = true;       // Булева стойност

    cout << "Числото е: " << number << endl;
    cout << "Десетично число: " << decimal << endl;
    cout << "Стойност на пи: " << pi << endl;
    cout << "Буквата е: " << letter << endl;
    cout << "Булева стойност: " << boolalpha << isTrue << endl;

    return 0;
}