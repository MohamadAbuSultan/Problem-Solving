
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long n1, n2, n3, result = 0;
	cin >> n1 >> n2 >> n3;
	long long minimum = min({ n1,n2,n3 });
	result += minimum;
	n1 -= minimum;
	n2 -= minimum;
	n3 -= minimum;
	n1 /= 2;
	minimum = min(n1, n3);
	result += minimum;
	cout << result;
}
