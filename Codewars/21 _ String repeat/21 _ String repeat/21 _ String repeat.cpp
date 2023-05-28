
#include <iostream>
#include <string>

using namespace std;

string repeat_str(size_t repeat, const string& str) {
	string s = "";
	for (int i = 0; i < repeat; i++)
	{
		s = s + str;
	}
	return s;
}

int main()
{
	cout << repeat_str(5, "I");
}

