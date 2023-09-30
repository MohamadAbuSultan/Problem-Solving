

#include <iostream>

using namespace std;

int main()
{
	long long number1, number2, k;
	cin >> number1 >> number2 >> k;
	if (number1 % k == 0 && number2 % k == 0) cout << "Both";
	else if (number1 % k == 0) cout << "Memo";
	else if (number2 % k == 0) cout << "Momo";
	else cout << "No One";
}
