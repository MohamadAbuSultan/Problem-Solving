
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	char c;
	int number;
	cin >> c >> number;
	vector<int> v1(number);
	for (int i = 0; i < number; i++)
	{
		cin >> v1[i];
		for (int j = 0; j < v1[i]; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}