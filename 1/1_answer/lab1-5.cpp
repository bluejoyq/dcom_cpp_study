#include <iostream>

using namespace std;

int main(void) {
    double fah, cel;     // float 형 변수 fah, cel 을 선언한다.

    cout << "Please enter Fahrenheit value: ";
    cin >> fah;         // cin 을 통해 fah 에 값을 입력받는다.

    cel = 5.0f/9.0f * (fah - 32.0);     // 화씨로 입력받은 fah 값을 섭씨로 변환하여 cel 변수에 저장한다.
    cout << "Celsius value is " << cel << endl;

    return 0;
}