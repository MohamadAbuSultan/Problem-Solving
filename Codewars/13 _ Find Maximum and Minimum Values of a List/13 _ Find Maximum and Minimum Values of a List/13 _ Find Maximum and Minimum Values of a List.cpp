
#include <iostream>
#include <vector>

using namespace std;

int min(vector<int> list) {
	int min = list[0];
	for (int i = 1; i < list.size(); i++)
	{
		if (list[i] < min)
			min = list[i];
	}
	return min;
}

int max(vector<int> list) {

	int max = list[0];
	for (int i = 1; i < list.size(); i++)
	{
		if (list[i] > max)
			max = list[i];
	}
	return max;
}

int main()
{
	using V = std::vector<int>;
	cout << min(V{ -52, 56, 30, 29, -54, 0, -110 }) << endl;
	cout << max(V{ 4,6,2,1,9,63,-134,566 , 124271756 });
}
