
#include <iostream>
#include <vector>

using namespace std;

int arrayPlusArray(vector<int> arr, vector<int> arr2) {
	int result = 0;
	for (int i : arr) result += i;
	for (int j : arr2) result += j;
	return result;
}

int main()
{
	using V = vector<int>;

	cout << arrayPlusArray(V{ 1, 2, 3 }, V{ 4, 5, 6 }) << endl;
	cout << arrayPlusArray(V{ 1, -2, -3 }, V{ 4, -5, 6 });
	;
}
