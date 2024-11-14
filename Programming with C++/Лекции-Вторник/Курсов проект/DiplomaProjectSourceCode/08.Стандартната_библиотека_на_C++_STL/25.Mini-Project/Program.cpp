#include <iostream>
#include <map>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    map<string, int> оценки;
    оценки["Иван"] = 5;
    оценки["Мария"] = 6;
    оценки["Георги"] = 4;

    cout << "Оценките на учениците са: " << endl;
    for (auto& пара : оценки) {
        cout << пара.first << " - " << пара.second << endl;
    }

    return 0;
}
