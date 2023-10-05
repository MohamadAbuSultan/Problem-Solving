
#include <iostream>

using namespace std;

int main()
{
	int number1, number2;
	cin >> number1 >> number2;
	int n3 = min(number1, number2);
	int result = 0;
	for (int i = 1; i <= n3; i++)
	{
		if (number1 % i == 0 && number2 % i == 0) result = i;
	}
	cout << result;
}
