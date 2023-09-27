

#include <iostream>

using namespace std;

int main()
{
	int number1, number2, result;
	char c1, c2;
	cin >> number1 >> c1 >> number2 >> c2 >> result;
	switch (c1)
	{
	case '+':
		if ((number1 + number2) == result) cout << "Yes";
		else cout << number1 + number2;
		break;
	case '-':
		if ((number1 - number2) == result) cout << "Yes";
		else cout << number1 - number2;
		break;
	case '*':
		if ((number1 * number2) == result) cout << "Yes";
		else cout << number1 * number2;
		break;
	case '/':
		if ((number1 / number2) == result) cout << "Yes";
		else cout << number1 / number2;
		break;
	default:
		break;
	}
}
