#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int �����[5] = { 1, 2, 3, 4, 5 };

    cout << "���������� �� ������ ��: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "�����[" << i << "] = " << �����[i] << endl;
    }

    return 0;
}