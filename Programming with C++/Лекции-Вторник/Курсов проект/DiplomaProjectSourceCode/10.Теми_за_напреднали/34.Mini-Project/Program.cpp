#include <iostream>
#include <stdexcept>
using namespace std;

// ������� �� �������, ����� ������ ���������� ��� ������� �� ����
double divide(double a, double b) {
    if (b == 0)
        throw runtime_error("Error: Division by zero");

    return a / b;
}

int main() {
    try {
        double num1 = 10.0, num2 = 0.0;
        double result = divide(num1, num2);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error& e) {
        cerr << "Caught an exception: " << e.what() << endl;
    }

    return 0;
}