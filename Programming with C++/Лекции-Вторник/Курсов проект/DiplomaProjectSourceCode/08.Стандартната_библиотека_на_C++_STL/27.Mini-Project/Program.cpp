#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    vector<int> ����� = { 10, 20, 30, 40, 50 };

    cout << "���������� ��� ������� ��: ";
    for (vector<int>::iterator it = �����.begin(); it != �����.end(); ++it) {
        cout << *it << " "; // ������������ �� ���������, �� �� �� ������ ����������
    }
    cout << endl;

    return 0;
}
