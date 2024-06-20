#include <iostream>

using namespace std;

int main()
{
	int counter, number1, number2, sum;

	cin >> counter;

	for (int i = 0; i < counter; i++)
	{
		sum = 0;

		cin >> number1 >> number2;

		int maxNum = max(number1, number2);
		int minNum = min(number1, number2);

		for (int i = minNum + 1; i < maxNum; i++) {
			if (i % 2 != 0) sum += i;
		}

		cout << sum << endl;
	}
}