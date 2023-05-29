

#include <iostream>

using namespace std;

string reverseString(string str)
{
	string s;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		s += str[i];
	}
	return s;
}

int main()
{
	cout << reverseString("world");
}
