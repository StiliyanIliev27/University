#include <iostream>
#include <fstream> // �� ������ � �������
#include <string>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ��������� �������� ������������ �� ��������

    ifstream ����������("../28.Mini-Project/�����.txt"); // ������ ����� �� ������ ���� ������������ �� ��� �� ������������ �� �����
    if (����������.is_open()) {
        string ���;
        while (getline(����������, ���)) {
            cout << ��� << endl; // ������� ���������� ���
        }
        ����������.close(); // ������� �����
    }
    else {
        cout << "��������� �������� �� �����." << endl;
    }

    return 0;
}
