#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int ����� = 10;
    int* �������� = &�����;

    *�������� = 20; // ������� �� ���������� �� `�����` ���� ���������
    cout << "���� �������� �� �������: " << ����� << endl;

    return 0;
}
