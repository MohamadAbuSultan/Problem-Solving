
#include <iostream>

using namespace std;

int basicOp(char op, int val1, int val2) {
	switch (op)
	{
	case '+':
		return val1 + val2;
		break;
	case '-':
		return val1 - val2;
		break;
	case '/':
		return val1 / val2;
		break;
	case '*':
		return val1 * val2;
		break;
	default:
		break;
	}
}

int main()
{
	cout << basicOp('+', 6, 2) << endl;
	cout << basicOp('-', 6, 2) << endl;
	cout << basicOp('/', 6, 2) << endl;
	cout << basicOp('*', 6, 2) << endl;
}
