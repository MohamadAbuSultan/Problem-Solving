
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double number1, number2;
	cin >> number1 >> number2;
	double number3 = number1 / number2;
	cout << "floor " << number1 << " / " << number2 << " = " << floor(number3) << endl;
	cout << "ceil " << number1 << " / " << number2 << " = " << ceil(number3) << endl;
	cout << "round " << number1 << " / " << number2 << " = " << round(number3) << endl;
}
