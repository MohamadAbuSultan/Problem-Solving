
#include <iostream>

using namespace std;

int main()
{
	int VanyaFriends, FenceLength, arr[1000], counter = 0;
	cin >> VanyaFriends >> FenceLength;
	for (int i = 0; i < VanyaFriends; i++)
	{
		cin >> arr[i];
		if (FenceLength < arr[i])
		{
			counter += 2;
		}
		else
		{
			counter += 1;
		}
	}
	cout << counter;
}
