#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul");
    int age;
    cout << "�������� ������ �������: ";
    cin >> age;  // ������ �� ���� �� �����������

    cout << "������ ������� �: " << age << " ������." << endl;
    return 0;
}