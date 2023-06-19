
#include <iostream>
#include<vector>
#include <string>

using namespace std;
string howManyDalmatians(int number) {
    vector<string> dogs{ "Hardly any", "More than a handful!" , "Woah that's a lot of dogs!", "101 DALMATIONS!!!" };
    return number <= 10 ? dogs[0] : number <= 50 ? dogs[1] : number == 101 ? dogs[3] : dogs[2];
}

int main()
{
    cout << howManyDalmatians(101);
}
