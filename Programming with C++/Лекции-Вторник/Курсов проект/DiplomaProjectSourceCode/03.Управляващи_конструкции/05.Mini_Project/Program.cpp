#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int �����;
    cout << "�������� �����: ";
    cin >> �����;

    if (����� > 0) {
        cout << "������� � �����������." << endl;
    }
    else if (����� < 0) {
        cout << "������� � �����������." << endl;
    }
    else {
        cout << "������� � ����." << endl;
    }

    return 0;
}
