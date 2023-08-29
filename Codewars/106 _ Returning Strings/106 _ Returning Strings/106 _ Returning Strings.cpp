
#include <iostream>
#include <string>

using namespace std;

string greet(const string& n) {
    return "Hello, " + n + " how are you doing today?";
}

int main()
{
    cout << greet("moh");
}