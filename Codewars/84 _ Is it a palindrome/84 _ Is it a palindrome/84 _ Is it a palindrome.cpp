
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrom(string str)
{
	// حل م.أسامة محمد ، حل أسطوري
	for (int i = 0; i < str.length(); i++)
	{
		if (tolower(str[i]) != tolower(str[str.length() - 1 - i])) return false;
	}
	return true;
}

// my solution حلي 
// bool isPalindrom(string str)
//{
//	string str2 = str;
//	reverse(str.begin(), str.end());
//	for (int i = 0; i < str.length(); i++)
//	{
//		str[i] = tolower(str[i]);
//		str2[i] = tolower(str2[i]);
//		if (str2[i] == str[i]) continue;
//		else return false;
//	}
//	return true;
//}

int main()
{
	string s = "a";
	cout << isPalindrom(s); 
	s = "Aba";
	cout << isPalindrom(s);
	s = "Abba";
	cout << isPalindrom(s);
	s = "hello";
	cout << isPalindrom(s);
}
