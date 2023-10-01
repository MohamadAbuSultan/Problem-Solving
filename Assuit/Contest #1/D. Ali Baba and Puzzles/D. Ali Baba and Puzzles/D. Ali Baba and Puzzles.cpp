#include <iostream>

using namespace std;

int main()
{
	long long n1, n2, n3, result;
	cin >> n1 >> n2 >> n3 >> result;
	if ((n1 * n2 + n3) == result || (n1 + n2 * n3) == result) cout << "YES";
	else if ((n1 * n2 - n3) == result || (n1 - n2 * n3) == result) cout << "YES";
	else if ((n1 - n2 + n3) == result || (n1 + n2 - n3) == result) cout << "YES";
	else cout << "NO";
}