#include <iostream>

using namespace std;

int main()
{
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;

	cout << i1 + (i2 * i3) << '\n';		// int + (int * int), 값은 int
	cout << i1 * (i2 + i3) << '\n';		// int * (int + int), 값은 int
	cout << i1 / (i2 + i3) << '\n';		// int / (int + int), 값은 int
	cout << i1 / i2 + i3 << '\n';		// int / int + int, 값은 int
										// 2 / (-5)는 0, 0 + (-3)은 -3
	cout << 3 + 4 + 5 / 3 << '\n';		// 5 / 3은 1, 값은 8
	cout << (3 + 4 + 5) / 3 << '\n';	// 모두 int라 int 값 출력
	cout << d1 + (d2 * d3) << '\n';		// double + (double * double), 값은 double
	cout << d1 + d2 * d3 << '\n';		// double + double * double, 값은 double
	cout << d1 / d2 - d3 << '\n';		// double / double - double, 값은 double
	cout << d1 / (d2 - d3) << '\n';		// double / (double - double), 값은 double
	cout << d1 + d2 + d3 / 3 << '\n';	// double + double + double / 3, 값은 double
										// d3 / 3은 double / 3이므로 double 값 출력
	cout << (d1 + d2 + d3) / 3 << '\n';	// (double + double + double) / 3, 값은 double
	return 0;
}