

#include <iostream>

using namespace std;

string to_alternating_case(const string& str)
{
	string s = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (isupper(str[i]))
			s += tolower(str[i]);
		else
			s += toupper(str[i]);
	}
	return s;
}

int main()
{
	cout << to_alternating_case("Hello World");
}
