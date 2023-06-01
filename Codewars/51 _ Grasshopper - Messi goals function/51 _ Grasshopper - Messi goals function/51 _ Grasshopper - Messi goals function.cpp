

#include <iostream>

using namespace std;

int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
    return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}

int main()
{
    cout << goals(1, 2, 7);
}
