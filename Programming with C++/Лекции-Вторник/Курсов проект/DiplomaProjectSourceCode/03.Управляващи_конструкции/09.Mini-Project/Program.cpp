#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int ����� = 1;
    cout << "����� do-while: " << endl;
    do {
        cout << "�������� " << ����� << endl;
        �����++;
    } while (����� <= 5);

    return 0;
}