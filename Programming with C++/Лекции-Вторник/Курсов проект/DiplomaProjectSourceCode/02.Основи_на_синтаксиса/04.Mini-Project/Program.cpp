#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul");
    int age;
    cout << "Въведете вашата възраст: ";
    cin >> age;  // Четене на вход от потребителя

    cout << "Вашата възраст е: " << age << " години." << endl;
    return 0;
}