
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int size, counter = 0;
	cin >> size;
	if (size < 26)
	{
		cout << "NO";
		return 0;
	}
	string word;
	cin >> word;
	for (int i = 0; i < size; i++)
	{
		word[i] = towlower(word[i]);
	}
	sort(word.begin(), word.end());
	for (int i = 0; i < size; i++)
	{
		if (word[i] != word[i+1]) { counter++; }
	}
	if (counter == 26) cout << "YES";
	else cout << "NO";
}
