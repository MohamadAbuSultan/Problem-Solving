
#include <iostream>

using namespace std;

int main()
{
	char c;
	cin >> c;
	for (int i = 90; i <= 122; i++)
	{
		if (c == 'z') {
			cout << "a";
			return 0;
		}
		if (char(i) == c) cout << char(i + 1);
	}
}
