#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	int current = 1;

	for (int i = 0; i < number; i++)
	{
		cout << current << " " << current + 1 << " " << current + 2 << " PUM" << endl;
		current += 4;
	}
}
