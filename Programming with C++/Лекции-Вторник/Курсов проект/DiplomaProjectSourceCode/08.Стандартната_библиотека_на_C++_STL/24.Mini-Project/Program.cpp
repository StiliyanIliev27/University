#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    vector<int> ����� = { 1, 2, 3, 4, 5 };
    �����.push_back(6); // �������� �� ��� �������

    cout << "���������� ��� ������� ��: ";
    for (int i = 0; i < �����.size(); i++) {
        cout << �����[i] << " ";
    }
    cout << endl;

    return 0;
}
