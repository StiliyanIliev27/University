#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;

// Функция за паралелно сортиране на част от масив
void parallelSort(vector<int>& arr, int start, int end) {
    sort(arr.begin() + start, arr.begin() + end);
}

int main() {
    vector<int> arr = { 10, 3, 2, 8, 6, 7, 1, 5, 4, 9 };

    // Създаваме два потока за паралелно сортиране
    thread t1(parallelSort, ref(arr), 0, arr.size() / 2);
    thread t2(parallelSort, ref(arr), arr.size() / 2, arr.size());

    // Изчакваме нишките да завършат
    t1.join();
    t2.join();

    // Обединяваме двете сортирани части
    inplace_merge(arr.begin(), arr.begin() + arr.size() / 2, arr.end());

    // Извеждаме резултата
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
