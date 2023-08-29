
#include <iostream>

using namespace std;

int area_or_perimeter(int l, int w) {
	return l == w ? l * w : 2 * (l + w);
}

int main()
{
	cout << area_or_perimeter(4, 4) << endl;
	cout << area_or_perimeter(6, 10);
}