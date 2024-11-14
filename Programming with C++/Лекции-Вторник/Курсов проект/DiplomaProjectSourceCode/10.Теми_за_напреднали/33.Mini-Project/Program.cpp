#include <iostream>
using namespace std;

// ������ �� ����
template <typename T>
class Box {
private:
    T value;
public:
    // �����������
    Box(T v) : value(v) {}

    // ����� �� ���������� �� ����������
    T getValue() const {
        return value;
    }

    // ����� �� �������� �� ����������
    void setValue(T v) {
        value = v;
    }

    // �������� ����� �� ��������� �� ����������
    void print() const {
        cout << "Box contains: " << value << endl;
    }
};

int main() {
    Box<int> intBox(42); // ��������� �� Box � ���� �����
    intBox.print();

    Box<string> stringBox("Hello, World!"); // ��������� �� Box � ���
    stringBox.print();

    return 0;
}
