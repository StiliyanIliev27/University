#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int ������;
    cout << "�������� ������ �� ������: ";
    cin >> ������;

    int* ����� = new int[������]; // �������� �� ����� �� �����

    for (int i = 0; i < ������; i++) {
        �����[i] = i * 2; // ��������� �� ������
    }

    cout << "���������� �� ������ ��: " << endl;
    for (int i = 0; i < ������; i++) {
        cout << �����[i] << " ";
    }
    cout << endl;

    delete[] �����; // ������������� �� ������� �� ������
    ����� = nullptr;

    return 0;
}
