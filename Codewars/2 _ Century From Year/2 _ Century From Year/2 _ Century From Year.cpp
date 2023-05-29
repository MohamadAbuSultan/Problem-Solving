
#include <iostream>

using namespace std;

int centuryFromYear(int year)
{
	
	if (year % 100 == 0)
		return year / 100;
	else
		return year / 100 + 1;

	// return year % 100 == 0 ? year / 100 : year / 100 + 1;
	
	/*
		float number = 1;
		number = (float)year / 100;
		if (year % 100 > 0)
			number++;
		return (int)number;
	*/
}

int main()
{
	cout << centuryFromYear(1705);
}
