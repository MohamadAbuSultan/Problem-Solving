
#include <iostream>

using namespace std;

int main()
{
	long long number;
	cin >> number;
	long long sum = 0;
	sum = (number * (number + 1)) / 2;
	cout << sum;
}