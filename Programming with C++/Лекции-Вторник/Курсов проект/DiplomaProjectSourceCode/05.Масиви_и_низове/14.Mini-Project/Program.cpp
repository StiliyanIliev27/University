#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int �������[2][3] = { {1, 2, 3}, {4, 5, 6} };

    cout << "���������� �� ��������� ��: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "�������[" << i << "][" << j << "] = " << �������[i][j] << endl;
        }
    }

    return 0;
}
