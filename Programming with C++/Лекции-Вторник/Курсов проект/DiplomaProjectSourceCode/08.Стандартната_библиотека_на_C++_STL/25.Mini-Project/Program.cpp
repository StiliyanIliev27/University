#include <iostream>
#include <map>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    map<string, int> ������;
    ������["����"] = 5;
    ������["�����"] = 6;
    ������["������"] = 4;

    cout << "�������� �� ��������� ��: " << endl;
    for (auto& ���� : ������) {
        cout << ����.first << " - " << ����.second << endl;
    }

    return 0;
}
