
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if (number <= 1) { cout << "NO"; return 0; }
	for (int i = number / 2; i >= 2; i--)
	{
		if (number % i == 0) {
			cout << "NO";
			return 0;
		}
		else continue;
	}
	cout << "YES";
}
