

#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int sum(vector<int> numbers)
{
	if (numbers.size() <= 1) return 0;
	int result = 0;
	sort(numbers.begin(), numbers.end());
	for (int i = 1; i < numbers.size() - 1; i++)
	{
		result += numbers.at(i);
	}
	return result;
}

int main()
{
	cout << sum({ 6, 2, 1, 8, 10 });
}