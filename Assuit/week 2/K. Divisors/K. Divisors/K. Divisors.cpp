
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if (number < 1 || number > 10000) {
		return 0;
	}
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0) cout << i << endl;
	}
}
