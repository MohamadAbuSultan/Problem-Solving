
#include <iostream>

using namespace std;

int main()
{
	int size1, size2;
	int counter = 0;
	cin >> size1 >> size2;
	while (size1<=size2)
	{
		size1 *= 3;
		size2 *= 2;
		counter++;
	}
	cout << counter;
}
