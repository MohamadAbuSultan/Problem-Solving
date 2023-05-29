
#include <iostream>
#include <string>

using namespace std;

string rps(const string& p1, const string& p2)
{
    string msg = "";
    string p1win = "Player 1 won!";
    string p2win = "Player 2 won!";

    if (p1 == p2) msg = "Draw!";

    if (p1 == "rock")
    {
        if (p2 == "paper") msg = p2win;
        if (p2 == "scissors") msg = p1win;
    }

    if (p1 == "paper")
    {
        if (p2 == "scissors") msg = p2win;        
        if (p2 == "rock") msg = p1win;
    }

    if (p1 == "scissors")
    {
        if (p2 == "rock") msg = p2win;
        if (p2 == "paper") msg = p1win;
    }
    
    return msg;
}
int main()
{
    cout << rps("rock", "scissors");
    cout << rps("rock", "paper");
    cout << rps("rock", "rock");
}