
#include <iostream>
using namespace std;

int main()
{
	int size, result = 1;
	cin >> size;
	string temp, value;
	for (int i = 0; i < size; i++)
	{
		cin >> value;
		if (i == 0) {
			temp = value;
			continue;
		}
		if (temp[1] == value[0])
			result++;
		temp = value;
	}
	cout << result;
}
