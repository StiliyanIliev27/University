#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int ден;
    cout << "Въведете номер на ден от седмицата (1-7): ";
    cin >> ден;

    switch (ден) {
    case 1:
        cout << "Понеделник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Сряда" << endl;
        break;
    case 4:
        cout << "Четвъртък" << endl;
        break;
    case 5:
        cout << "Петък" << endl;
        break;
    case 6:
        cout << "Събота" << endl;
        break;
    case 7:
        cout << "Неделя" << endl;
        break;
    default:
        cout << "Невалиден номер на ден." << endl;
        break;
    }

    return 0;
}