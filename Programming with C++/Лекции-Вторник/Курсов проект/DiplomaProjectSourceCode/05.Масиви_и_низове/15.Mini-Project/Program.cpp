#include <iostream>
#include <string>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    string ���;
    cout << "�������� ������ ���: ";
    getline(cin, ���); // ���� ��� ��� �� �����

    cout << "�������, " << ��� << "!" << endl;

    return 0;
}
