#include <iostream>

using namespace std;

string removeExclamationMarks(string str) {
    string str2 = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '!')
            str2 += str[i];
    }
    return str2;
}
int main()
{
    cout << removeExclamationMarks("Hello! World!");
}
