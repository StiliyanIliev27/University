#include <iostream>
#include <thread>
#include <vector>
using namespace std;

// ������� �� ���������� �� ������ �� ���� �� �����
void sumPart(const vector<int>& arr, int start, int end, int& result) {
    result = 0;
    for (int i = start; i < end; ++i) {
        result += arr[i];
    }
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int result1 = 0, result2 = 0;

    // ��������� ��� ������ �� ��������� ����������
    thread t1(sumPart, ref(arr), 0, arr.size() / 2, ref(result1));
    thread t2(sumPart, ref(arr), arr.size() / 2, arr.size(), ref(result2));

    // ��������� ������� �� ��������
    t1.join();
    t2.join();

    // ����������� ������ ����
    int totalSum = result1 + result2;
    cout << "Total sum: " << totalSum << endl;

    return 0;
}