#include<iostream>
using namespace std;
int getCountMinMax(double& min, double& max) {
	int cnt{};
	min = { DBL_MAX }, max = { DBL_MIN };
	double currNum;
	do {
		cout << "������ ����� (�� ����� �� 0): ";
		cin >> currNum;
		if (currNum < min)
			min = currNum;
		else if (currNum > max)
			max = currNum;
		if(currNum)
			cnt++;
	} while (currNum);
	return cnt;
}
int main() {
	system("chcp 1251 > nul");
	double min, max;
	long cnt{ getCountMinMax(min, max) };
	cout << "���� ����� ����� 0: " << cnt << endl
		<< "��������� �����: " << min << endl 
		<< "���������� �����: " << max << endl;
}