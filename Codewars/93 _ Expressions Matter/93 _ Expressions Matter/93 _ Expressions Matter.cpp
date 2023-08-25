#include <iostream>
#include <algorithm>

using namespace std;

unsigned short int expressionsMatter(unsigned short int  a,
									 unsigned short int b,
									 unsigned short int c)
{
	int maxValue = max({
		(a + b + c),
		(a * (b + c)),
		(a * b * c),
		((a + b) * c )
					   });

	return maxValue;
}

int main()
{
	cout << expressionsMatter(1, 1, 1) << endl;
	cout << expressionsMatter(1, 2, 3) << endl;
	cout << expressionsMatter(3, 4, 5) << endl;
}
