#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul");
    int x = 10;
    int y = 3;
    int sum = x + y;    // ��������
    int product = x * y; // ���������
    bool comparison = (x > y); // �������� ���� x � ��-������ �� y

    cout << "������ �� x � y �: " << sum << endl;
    cout << "�������������� �� x � y �: " << product << endl;
    cout << "x ��-������ �� � �� y? " << boolalpha << comparison << endl;

    return 0;
}