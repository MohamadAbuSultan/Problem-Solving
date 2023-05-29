
#include <iostream>


int quadrant(int x, int y) {
	if (x > 0 && y > 0) return 1;
	else if (x < 0 && y < 0) return 3;
	else if (x > 0 && y < 0) return 4;
	return 2;
}

int main()
{
	std::cout << quadrant(1,1);
}