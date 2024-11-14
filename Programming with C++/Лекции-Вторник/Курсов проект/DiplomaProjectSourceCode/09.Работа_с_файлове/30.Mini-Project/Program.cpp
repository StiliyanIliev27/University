#include <iostream>
#include <fstream> // За работа с файлове
#include <string>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    ifstream файлЧетене("../28.Mini-Project/данни.txt"); // Отваря файла за четене чрез използването на път до директорията на файла
    if (файлЧетене.is_open()) {
        string ред;
        while (getline(файлЧетене, ред)) {
            cout << ред << endl; // Извежда прочетения ред
        }
        файлЧетене.close(); // Затваря файла
    }
    else {
        cout << "Неуспешно отваряне на файла." << endl;
    }

    return 0;
}
