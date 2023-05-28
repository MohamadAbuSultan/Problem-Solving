
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int square_sum(const vector<int>& numbers)
{
	int result = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
	    result += (int)pow(numbers[i], 2);
	}
	return result;
}

int main()
{
	cout << square_sum({ 1, 2 });
}
