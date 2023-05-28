

#include <iostream>
#include <array>

using namespace std;


int main()
{
	int gamePlay, counterA = 0, counterD = 0;
	string name;
	cin >> gamePlay;
	cin >> name;

	for (int i = 0; i < gamePlay; i++)
	{
		if (name[i] == 'A')
			counterA++;
		else
			counterD++;
	}
	if (counterA > counterD)
		cout << "Anton";
	else if (counterD > counterA)
		cout << "Danik";
	else
		cout << "Friendship";

	
}