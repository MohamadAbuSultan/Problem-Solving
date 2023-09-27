

#include <iostream>

using namespace std;

int main()
{
	double number;
	cin >> number;
	int number2 = int(number);
	if ((number - number2) == 0) {
		cout << "int " << (int)number;
	}
	else {
		cout << "float " << (int)number << " " << number - number2;
	}
}