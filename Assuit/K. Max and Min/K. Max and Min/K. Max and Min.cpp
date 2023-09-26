
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int minValue = min(min(A, B), C);
	int maxValue = max(max(A, B), C);
	cout << minValue << " " << maxValue;
}
