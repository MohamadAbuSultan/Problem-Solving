

#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    char c;
    cin >> number1 >> c >> number2;
	switch (c)
	{
	case '>':
		if (number1 > number2) cout << "Right";
		else cout << "Wrong";
		break;
	case '<':
		if (number1 < number2) cout << "Right";
		else cout << "Wrong";
		break;
	case '=':
		if (number1 == number2) cout << "Right";
		else cout << "Wrong";
		break;
	default:
		break;
	}
}
