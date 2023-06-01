
#include <iostream>

using namespace std;

string get_planet_name(int id)
{
    string planets[] = { "Mercury","Venus","Earth","Mars" ,"Jupiter" ,"Saturn","Uranus","Neptune","Pluto" };
    return planets[id - 1];
}

int main()
{
    cout << get_planet_name(4);
}
