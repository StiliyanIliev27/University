#include <iostream>
using namespace std;

int ���������(int n) {
    if (n <= 1) {
        return 1; // ����� ������: ����������� �� 0 ��� 1 � 1
    }
    else {
        return n * ���������(n - 1); // ���������� ������
    }
}

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int �����;
    cout << "�������� �����: ";
    cin >> �����;

    cout << "����������� �� " << ����� << " �: " << ���������(�����) << endl;

    return 0;
}