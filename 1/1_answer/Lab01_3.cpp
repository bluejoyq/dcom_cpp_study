#include <iostream>

using namespace std;

int main()
{
	int i1 = 2, i2 = 5, i3 = -3;
	double d1 = 2.0, d2 = 5.0, d3 = -0.5;

	cout << i1 + (i2 * i3) << '\n';		// int + (int * int), ���� int
	cout << i1 * (i2 + i3) << '\n';		// int * (int + int), ���� int
	cout << i1 / (i2 + i3) << '\n';		// int / (int + int), ���� int
	cout << i1 / i2 + i3 << '\n';		// int / int + int, ���� int
										// 2 / (-5)�� 0, 0 + (-3)�� -3
	cout << 3 + 4 + 5 / 3 << '\n';		// 5 / 3�� 1, ���� 8
	cout << (3 + 4 + 5) / 3 << '\n';	// ��� int�� int �� ���
	cout << d1 + (d2 * d3) << '\n';		// double + (double * double), ���� double
	cout << d1 + d2 * d3 << '\n';		// double + double * double, ���� double
	cout << d1 / d2 - d3 << '\n';		// double / double - double, ���� double
	cout << d1 / (d2 - d3) << '\n';		// double / (double - double), ���� double
	cout << d1 + d2 + d3 / 3 << '\n';	// double + double + double / 3, ���� double
										// d3 / 3�� double / 3�̹Ƿ� double �� ���
	cout << (d1 + d2 + d3) / 3 << '\n';	// (double + double + double) / 3, ���� double
	return 0;
}