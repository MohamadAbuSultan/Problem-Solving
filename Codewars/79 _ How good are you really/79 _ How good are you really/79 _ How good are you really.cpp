#include <iostream>
#include <vector>

using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
	int number = 0;
	for (int i = 0; i < classPoints.size(); i++)
	{
		number += classPoints[i];
	}
	number = (int)(number / classPoints.size());
	return yourPoints >= number;
}

int main()
{
	cout << betterThanAverage({ 20,30,40,50 }, 60) << endl;
	cout << betterThanAverage({ 20,30,40,50 }, 20) << endl;
}