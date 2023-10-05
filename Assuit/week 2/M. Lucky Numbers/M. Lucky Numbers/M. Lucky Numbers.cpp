
#include <iostream>

using namespace std;

int main()
{
	int number1, number2, counter = -1;
	cin >> number1 >> number2;
	for (int i = number1; i <= number2; i++)
	{
		int flap = 0, x = i;
		while (x)
		{
			if (x % 10 != 4 && x % 10 != 7)flap++;
			x /= 10;
		}
		if (flap == 0) { 
			cout << i << " "; 
			counter++;
		}
	}
	if(counter == -1) cout << counter;
}