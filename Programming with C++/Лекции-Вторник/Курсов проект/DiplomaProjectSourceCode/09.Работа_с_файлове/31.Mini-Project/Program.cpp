#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    ifstream �����������("../29.Mini-Project/�����.bin", ios::binary);
    if (�����������.is_open()) {
        int �����;
        �����������.read(reinterpret_cast<char*>(&�����), sizeof(�����));
        �����������.close();
        cout << "����������� ����� �: " << ����� << endl;
    }
    else {
        cout << "��������� �������� �� �����." << endl;
    }

    return 0;
}
