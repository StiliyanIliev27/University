#include <iostream>
using namespace std; // ���������� �������������� "std", �� �� �� ��������� "std::" ������ �� ����

int main() {
    system("chcp 1251 > nul");
    int number = 10;          // ���� �����
    float decimal = 5.7;      // ����� � ������� �������
    double pi = 3.141592653;  // ����� � ������ �������
    char letter = 'C';        // ������
    bool isTrue = true;       // ������ ��������

    cout << "������� �: " << number << endl;
    cout << "��������� �����: " << decimal << endl;
    cout << "�������� �� ��: " << pi << endl;
    cout << "������� �: " << letter << endl;
    cout << "������ ��������: " << boolalpha << isTrue << endl;

    return 0;
}