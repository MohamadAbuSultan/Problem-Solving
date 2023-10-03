

#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	bool isEven = false;
	for (int i = 2; i <= number; i+=2)
	{
		cout << i << endl;
		isEven = true;
	}
	if (!isEven) {
		cout << -1 << endl; 
	}
}

