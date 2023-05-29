
#include <iostream>
#include <vector>

using namespace std;

vector<int> between(int start, int end) {
	vector<int> numbers;

	for (int i = start; i < end; i++)
	{
		numbers.push_back(i);
	}

	return numbers;
}
int main()
{
	vector<int> numbers = between(1,10);
	for (auto& item : numbers) {
		cout << item << " : ";
	}
}
