
#include <iostream>
#include <string>

using namespace std;

string update_light(string current) {
    if (current == "green")
        return current = "yellow";
    else if (current == "yellow")
        return current = "red";
    else
        return current = "green";
}

int main()
{
    cout << update_light("green");
}