#include <iostream>
using namespace std;

int main()
{
	int value1, value2;		// 사용자로부터 입력받을 두 개의 int형 변수 선언
	cout << "Please enter two integer values: ";
	cin >> value1 >> value2;	// 사용자로부터 두 개의 정수를 입력받아 값을 value1, value2에 지정
	cout << value1 << " + " << value2 << " = " << value1 + value2 << '\n';
	cout << value1 << " - " << value2 << " = " << value1 - value2 << '\n';
	cout << value1 << " * " << value2 << " = " << value1 * value2 << '\n';
	cout << value1 << " / " << value2 << " = " << (double) value1 / value2 << '\n';	// *1
	cout << value1 << " % " << value2 << " = " << value1 % value2 << '\n';
	return 0;
}

// *1 : value1과 value2가 int형 변수이기 때문에 int와 int를 나눌 경우 값도 int형으로 나온다.
//		그렇기때문에, 예를 들어 value1이 7이고 value2가 2이면, 나눈 값이 3.5가 아닌 3이 나오게 된다.
//		3.5와 같이 double값을 얻고 싶을때는 value1과 value2 중 하나의 변수를 double 형으로 바꿔주면 되는데,
//		12 line과 같이 value1를 (double) value1라 하면 double형으로 취급되어 값이 double이 된다.