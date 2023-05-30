
#include <iostream>
#include <string>

using namespace std;

string abbrevName(string name)
{
    string result = "";
    result += toupper(name[0]);
    result += ".";
    result += toupper(name[name.find(" ") + 1]);
    return result;
}

int main()
{
    cout << abbrevName("mohamad khaled");
}