
#include <iostream>
#include <string>

using namespace std;

string rps(const string& p1, const string& p2)
{
    if (p1 == "scissors" && p2 == "paper") return "Player 1 won!";
    else if (p1 == "scissors" && p2 == "rock") return "Player 2 won!";
    else if (p1 == "paper" && p2 == "scissors") return "Player 2 won!";
    else if (p1 == "paper" && p2 == "rock") return "Player 1 won!";
    else if (p1 == "rock" && p2 == "scissors") return "Player 1 won!";
    else if (p1 == "rock" && p2 == "paper") return "Player 2 won!";
    else return "Draw!";
}
int main()
{
    cout << rps("rock", "scissors");
    cout << rps("rock", "paper");
    cout << rps("rock", "rock");
}