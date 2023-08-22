
#include <iostream>
#include <string>

using namespace std;

string reverse_words(const string& str) {
	string result = "";
	string temp = "";

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
		{
			result = temp + " " + result;
			temp = "";
		}
		else
			temp += str[i];
	}
	result = temp + " " + result;
	result.pop_back();

	return result;
}

int main()
{
	cout << reverse_words("hello world!");
}
