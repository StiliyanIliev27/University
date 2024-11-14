#include <iostream>
using namespace std;

// Шаблон за клас
template <typename T>
class Box {
private:
    T value;
public:
    // Конструктор
    Box(T v) : value(v) {}

    // Метод за получаване на стойността
    T getValue() const {
        return value;
    }

    // Метод за задаване на стойността
    void setValue(T v) {
        value = v;
    }

    // Примерен метод за извеждане на стойността
    void print() const {
        cout << "Box contains: " << value << endl;
    }
};

int main() {
    Box<int> intBox(42); // Създаване на Box с цяло число
    intBox.print();

    Box<string> stringBox("Hello, World!"); // Създаване на Box с низ
    stringBox.print();

    return 0;
}
