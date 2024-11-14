#include <iostream>
#include <vector>
using namespace std;

// Шаблон за функция, която намира максималната стойност
template <typename T>
T findMax(const vector<T>& arr) {
    T maxVal = arr[0];
    for (const T& elem : arr) {
        if (elem > maxVal) {
            maxVal = elem;
        }
    }
    return maxVal;
}

int main() {
    vector<int> intVec = { 1, 5, 3, 7, 2 };
    vector<double> doubleVec = { 2.3, 4.1, 5.5, 1.2, 3.8 };

    cout << "Max in intVec: " << findMax(intVec) << endl;
    cout << "Max in doubleVec: " << findMax(doubleVec) << endl;

    return 0;
}
