
#include <iostream>

using namespace std;

int ReversedNumber(int number) {
	int ReversedNumber = 0;
	while (number != 0) {
		int digit = number % 10;
		ReversedNumber = ReversedNumber * 10 + digit;
		number = number / 10;
	}
	return ReversedNumber;
}

int ReadPositiveNumber() {
	int Number;
	do
	{
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


int main()
{
	int number = ReadPositiveNumber();
	int reversedNumber = ReversedNumber(number);
	if (reversedNumber == number) {
		cout << reversedNumber << "\nYES";
	}
	else
	{
		cout << reversedNumber << "\nNO";
	}
}
