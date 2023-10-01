

#include <iostream>

using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	if (n1 > 0 && n2 > 0 && (n1 == (n2 + 1) || n2 == (n1 + 1) || n1 == n2))
		cout << "YES";
	else
		cout << "NO";
}