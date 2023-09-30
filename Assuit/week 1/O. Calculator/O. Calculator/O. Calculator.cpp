
#include <iostream>

using namespace std;

int main()
{
	int number1, number2;
	char c;
	cin >> number1 >> c >> number2;
	switch (c)
	{
	case '+':
		cout << number1 + number2;
		break;
	case '*':
		cout << number1 * number2;
		break;
	case '/':
		cout << number1 / number2;
		break;
	case '-':
		cout << number1 - number2;
		break;
	default:
		break;
	}
}
