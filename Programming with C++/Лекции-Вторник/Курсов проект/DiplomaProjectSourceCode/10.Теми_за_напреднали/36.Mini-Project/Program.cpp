#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
using namespace std;

// ������� �� ��������� ��������� �� ���� �� �����
void parallelSort(vector<int>& arr, int start, int end) {
    sort(arr.begin() + start, arr.begin() + end);
}

int main() {
    vector<int> arr = { 10, 3, 2, 8, 6, 7, 1, 5, 4, 9 };

    // ��������� ��� ������ �� ��������� ���������
    thread t1(parallelSort, ref(arr), 0, arr.size() / 2);
    thread t2(parallelSort, ref(arr), arr.size() / 2, arr.size());

    // ��������� ������� �� ��������
    t1.join();
    t2.join();

    // ����������� ����� ��������� �����
    inplace_merge(arr.begin(), arr.begin() + arr.size() / 2, arr.end());

    // ��������� ���������
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
