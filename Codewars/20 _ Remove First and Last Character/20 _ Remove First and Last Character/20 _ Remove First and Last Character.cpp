
#include <iostream>
#include <string>

using namespace std;

string sliceString(string str)
{
    string s = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == 0 || i == str.length() - 1)
            continue;
        s = s + str[i];
    }
    return s;
}

int main()
{
    cout << sliceString("Mohamad Khaled");
}
