#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int число;
    cout << "Въведете число: ";
    cin >> число;

    if (число > 0) {
        cout << "Числото е положително." << endl;
    }
    else if (число < 0) {
        cout << "Числото е отрицателно." << endl;
    }
    else {
        cout << "Числото е нула." << endl;
    }

    return 0;
}
