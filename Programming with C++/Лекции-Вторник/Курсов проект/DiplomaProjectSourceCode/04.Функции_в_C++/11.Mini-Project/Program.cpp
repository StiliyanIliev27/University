#include <iostream>
using namespace std;

int ������(int a, int b) {
    return a + b;
}

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    int �������� = ������(5, 7);
    cout << "������ �: " << �������� << endl;

    return 0;
}