#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int ����� = 1;
    cout << "����� while: " << endl;
    while (����� <= 5) {
        cout << "�������� " << ����� << endl;
        �����++;
    }

    return 0;
}