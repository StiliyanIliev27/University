#include <iostream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    cout << "����� for: " << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "�������� " << i << endl;
    }

    return 0;
}
