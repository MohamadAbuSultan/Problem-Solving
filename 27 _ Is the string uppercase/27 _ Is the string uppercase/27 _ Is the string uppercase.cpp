
#include <iostream>
#include <string>

using namespace std;

bool is_uppercase(const string& s) {
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i]))
			continue;
		else if (islower(s[i]))
			return false;
	}
	return true;
}

int main()
{
	cout << is_uppercase("hello I AM DONALD");
	cout << is_uppercase("HELLO I AM DONALD");
	cout << is_uppercase("ACSKLDFJSgSKLDFJSKLDFJ");
	cout << is_uppercase("ACSKLDFJSGSKLDFJSKLDFJ");
}