
#include <iostream>

using namespace std;

int move(int position, int roll) {
	return roll * 2 + position;
}

int main()
{
	cout << move(2, 5);
}
