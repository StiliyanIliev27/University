#include <iostream>
#include <vector>
#include <algorithm> // ���������� �� ���������
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    vector<int> ����� = { 5, 2, 9, 1, 7 };
    sort(�����.begin(), �����.end()); // ��������� �� �������

    cout << "��������� ��������: ";
    for (int num : �����) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
