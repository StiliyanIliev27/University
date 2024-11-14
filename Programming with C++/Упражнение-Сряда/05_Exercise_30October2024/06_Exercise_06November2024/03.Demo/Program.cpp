#include<iostream>
using namespace std;
int getCountMinMax(double& min, double& max) {
	int cnt{};
	min = { DBL_MAX }, max = { DBL_MIN };
	double currNum;
	do {
		cout << "Реално число (до равно на 0): ";
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
	cout << "Брой числа преди 0: " << cnt << endl
		<< "Минимално число: " << min << endl 
		<< "Максимално число: " << max << endl;
}