#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int ���;
    cout << "�������� ����� �� ��� �� ��������� (1-7): ";
    cin >> ���;

    switch (���) {
    case 1:
        cout << "����������" << endl;
        break;
    case 2:
        cout << "�������" << endl;
        break;
    case 3:
        cout << "�����" << endl;
        break;
    case 4:
        cout << "���������" << endl;
        break;
    case 5:
        cout << "�����" << endl;
        break;
    case 6:
        cout << "������" << endl;
        break;
    case 7:
        cout << "������" << endl;
        break;
    default:
        cout << "��������� ����� �� ���." << endl;
        break;
    }

    return 0;
}