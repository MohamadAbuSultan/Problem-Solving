
#include <iostream>

using namespace std;

int InputNumber() {
	int number;
	cin >> number;
	return number;
}

void PrintMultiplicationNumbers(int number) {
	for (int i = 1; i < 13; i++)
	{
		cout << number << " * " << i << " = " << number * i << endl;
	}
}

int main()
{
	PrintMultiplicationNumbers(InputNumber());
}
