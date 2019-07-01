#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Plase enter two interger values :" << endl;
	cout << "A : ", cin >> a;
	cout << "B : ", cin >> b;

	//a와 b의 값을 바꾸는 과정
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "value of A is : " << a << endl;
	cout << "value of B is : " << b << endl;

	system("pause");
	return 0;
}