#include <iostream>
using namespace std;

int main()
{
	int value1, value2;		// ����ڷκ��� �Է¹��� �� ���� int�� ���� ����
	cout << "Please enter two integer values: ";
	cin >> value1 >> value2;	// ����ڷκ��� �� ���� ������ �Է¹޾� ���� value1, value2�� ����
	cout << value1 << " + " << value2 << " = " << value1 + value2 << '\n';
	cout << value1 << " - " << value2 << " = " << value1 - value2 << '\n';
	cout << value1 << " * " << value2 << " = " << value1 * value2 << '\n';
	cout << value1 << " / " << value2 << " = " << (double) value1 / value2 << '\n';	// *1
	cout << value1 << " % " << value2 << " = " << value1 % value2 << '\n';
	return 0;
}

// *1 : value1�� value2�� int�� �����̱� ������ int�� int�� ���� ��� ���� int������ ���´�.
//		�׷��⶧����, ���� ��� value1�� 7�̰� value2�� 2�̸�, ���� ���� 3.5�� �ƴ� 3�� ������ �ȴ�.
//		3.5�� ���� double���� ��� �������� value1�� value2 �� �ϳ��� ������ double ������ �ٲ��ָ� �Ǵµ�,
//		12 line�� ���� value1�� (double) value1�� �ϸ� double������ ��޵Ǿ� ���� double�� �ȴ�.