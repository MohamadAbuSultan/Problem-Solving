
#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;
	if ((number / 1000) % 2 == 0) cout << "EVEN";
	else cout << "ODD";
}
