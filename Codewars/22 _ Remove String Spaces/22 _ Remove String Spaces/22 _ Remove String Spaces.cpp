

#include <iostream>
#include <string>

using namespace std;

string no_space(const string& x)
{
	string s = "";
	string y = "";
	for (int i = 0; i < x.length(); i++)
	{
		s = x[i];
		if (s == " ")
			continue;
		y = y + s;
	}
    return y;
}

int main()
{
    cout << no_space("Hello World!\n");
}
