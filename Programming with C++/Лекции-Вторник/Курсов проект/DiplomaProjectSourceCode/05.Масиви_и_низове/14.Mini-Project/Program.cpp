#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    int матрица[2][3] = { {1, 2, 3}, {4, 5, 6} };

    cout << "Елементите на матрицата са: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "матрица[" << i << "][" << j << "] = " << матрица[i][j] << endl;
        }
    }

    return 0;
}
