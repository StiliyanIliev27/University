#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	system("chcp 1251 > nul");
	int const LC1{ 6 };
	long t1[][LC1]{
		{11,22,33},
		{},
		{ -1000, -2000, 300, 400, 500},
		1,2,3,4,5,6,7,8,9
	};
	const int LR1{ sizeof(t1) / sizeof(t1[0]) };
	for (int r{}; r < LR1; r++) {
		for (int c{}; c < LC1; c++)
			cout << setw(6) << t1[r][c];
		cout << endl;
	}
	cout << string(6 * LC1, '=') << endl;

	int const LC2{ 10 };
	long t2[][LC2]{
		{11,22,33},
		{},
		{ -1000, -2000, 300, 400, 500},
		1,2,3,4,5,6,7,8,9
	};
	const int LR2{ sizeof(t2) / sizeof(t2[0]) };
	for (auto & row : t2) {
		for (long elm : row)
			cout << setw(6) << elm;
		cout << endl;
	}
	cout << string(6 * LC2, '=') << endl;

	void view1(long ar[], int LenR, int LenC, int width);
	view1(t1[0], LR1, LC1, 6);
	view1(t2[0], LR2, LC2, 6);

	void view2(long ar[], int numElms, int LenC, int width);
	view2(t1[0], LR1 * LC1,LC1, 6);

	long minElm(const long ar[], int Len);
	cout << "Минимална стойност на елемент: " 
		<< minElm(t1[0], LR1 * LR1) << "\n\n";

	view2(t2[0], LR2 * LC2, LC2, 6);

	long minElm(const long ar[], int Len);
	cout << "Минимална стойност на елемент: "
		<< minElm(t2[0], LR2 * LC2) << "\n\n";
}

long minElm(const long ar[], int Len) {
	if (!ar || Len < 1) return LONG_MIN;
	long min{ *ar++ };
	for (; --Len; ar++)
		if (*ar < min) min = *ar;
	return min;
}

void view1(long ar[], int LenR, int LenC, int width) {
	if (!ar || LenC < 1) return;
	for (int r{}; r < LenR; r++) {
		for (int c{}; c < LenC; c++)
			cout << setw(width) << *ar++;
	}
	cout << string(width * LenC, '-') << endl;
}

void view2(long ar[], int numElms, int LenC, int width) {
	if (!ar || !LenC) return;
	for (int i{}; i < numElms; i++) {
		cout << setw(width) << *ar++;
		if ((i + 1) % LenC == 0) cout << endl;
	}
	cout << string(width * LenC, '*') << endl;
}