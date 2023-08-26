
#include <iostream>
#include <array>

using namespace std;

int points(const array<string, 10>& games) {
	int result = 0;
	for (auto point : games)
	{
		if (point[0] > point[2]) result += 3;
		if (point[0] == point[2]) result += 1;
	}
	return result;
}
int main()
{
	cout << points({ "1:0", "2:0", "3:0", "4:0", "2:1", "3:1", "4:1", "3:2", "4:2", "4:3" }) << endl;
}