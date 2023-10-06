
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	for (int i = number; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
