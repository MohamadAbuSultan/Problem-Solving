
#include <iostream>
#include <string>

using namespace std;

string makeUpperCase(const string& input_str)
{
	string s;
	for (int i = 0; i < input_str.length(); i++)
	{
		s += toupper(input_str[i]);
	}
	return s;
}

int main()
{
	cout << makeUpperCase("Hello");
}
