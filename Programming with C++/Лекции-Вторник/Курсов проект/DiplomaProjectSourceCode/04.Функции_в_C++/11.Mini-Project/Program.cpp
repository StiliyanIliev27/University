#include <iostream>
using namespace std;

int събери(int a, int b) {
    return a + b;
}

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int резултат = събери(5, 7);
    cout << "Сборът е: " << резултат << endl;

    return 0;
}