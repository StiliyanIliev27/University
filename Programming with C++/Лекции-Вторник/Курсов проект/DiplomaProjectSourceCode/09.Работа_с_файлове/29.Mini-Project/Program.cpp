#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    ofstream �����������("�����.bin", ios::binary);
    if (�����������.is_open()) {
        int ����� = 12345;
        �����������.write(reinterpret_cast<char*>(&�����), sizeof(�����));
        �����������.close();
        cout << "������� �� �������� � ������� ����." << endl;
    }
    else {
        cout << "��������� �������� �� �����." << endl;
    }

    return 0;
}
