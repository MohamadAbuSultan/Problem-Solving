
#include <iostream>

using namespace std;

int main()
{
	short number;
	cin >> number;
	int n1 = number % 10;
	int n2 = number / 10;
	if (n1 % n2 == 0 || n2 % n1 == 0) cout << "YES";
	else cout << "NO";
}