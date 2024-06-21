#include <iostream>

using namespace std;

int main()
{
	int N, sum = 0;
	cin >> N;

	int number1 = 0, number2 = 1;
	for (int i = 0; i < N - 1; i++)
	{
		if (i == 0) {
			cout << number1 << " " << number2;
			continue;
		}
		sum = number1 + number2;
		cout << " " << sum;
		number1 = number2;
		number2 = sum;
	}
}