#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cin >> number;
			if (number == 1)
			{
				cout << abs(i - 3) + abs(j - 3);
				return 0;
			}
		}
	}
}