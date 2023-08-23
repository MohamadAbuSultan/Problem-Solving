
#include <iostream>
#include <string>
#include <map>

using namespace std;

string update_light(string current) {
    map<string, string> mp{ {"green", "yellow"}, {"yellow", "red"}, {"red", "green"} };
    return mp[current];

    // return current == "green" ? "yellow" : light == "yellow" ? "red" : "green";

}

int main()
{
    cout << update_light("green") << endl;
    cout << update_light("yellow") << endl;
    cout << update_light("red") << endl;
}
