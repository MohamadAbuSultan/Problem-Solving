
#include <iostream>
#include <string>

using namespace std;

string people_with_age_drink(int age) {
    string s = "drink ";
    s += age < 14 ? "toddy" : age < 18 ? "coke" : age < 21 ? "beer" : "whisky";
}
int main()
{
    cout << people_with_age_drink(0);
}