#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= number - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = number; i >= 1; i--)
	{
		for (int j = 1; j <= number - i; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}