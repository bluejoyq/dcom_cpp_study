#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Plase enter two interger values :" << endl;
	cout << "A : ", cin >> a;
	cout << "B : ", cin >> b;

	//a�� b�� ���� �ٲٴ� ����
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "value of A is : " << a << endl;
	cout << "value of B is : " << b << endl;

	system("pause");
	return 0;
}