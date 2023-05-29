
#include <iostream>

using namespace std;

int nthEven(int n) {
	int result = 0;
	for (int i = 1; i < n; i++)
	{
		result += 2;
	}
	return result;
	/*int count = 0;
	for (int i = 0; i < 2147483647; i+=2)
	{
			count++;
			if (count == n)
				return i;
	}*/
}

int main()
{
	cout << nthEven(1) << endl;
	cout << nthEven(2) << endl;
	cout << nthEven(3) << endl;
	cout << nthEven(6) << endl;
	cout << nthEven(101) << endl;
	cout << nthEven(201) << endl;
	cout << nthEven(1001) << endl;
	cout << nthEven(1298734) << endl;
}
