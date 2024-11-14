#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    vector<int> числа = { 10, 20, 30, 40, 50 };

    cout << "Елементите във вектора са: ";
    for (vector<int>::iterator it = числа.begin(); it != числа.end(); ++it) {
        cout << *it << " "; // Дереференция на итератора, за да се получи стойността
    }
    cout << endl;

    return 0;
}
