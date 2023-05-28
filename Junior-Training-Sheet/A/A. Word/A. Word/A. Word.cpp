

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;
	char c;
	int counterLower = 0, counterUpper = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 97 && word[i] <= 122)
			counterLower++;
		else
			counterUpper++;
	}
	if (counterLower >= counterUpper)
	{
		for (int i = 0; i < word.length(); i++)
		{
			c = tolower(word[i]);
			cout << c;
		}
	}
	else
	{
		for (int i = 0; i < word.length(); i++)
		{
			c = toupper(word[i]);
			cout << c;
		}
	}
	
}