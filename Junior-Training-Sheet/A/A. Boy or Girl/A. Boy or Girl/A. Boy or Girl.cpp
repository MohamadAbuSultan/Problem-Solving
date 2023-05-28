
#include <iostream>
#include <unordered_set>
using namespace std;

string ReadString()
{
    string str;
    cin >> str;
    return str;
}

int CounntDistinct(string str)
{
    unordered_set<char> s;

    for (int i = 0; i < str.size(); i++) {
        s.insert(str[i]);
    }

    return s.size();
}

void CheckResult(int Number)
{
    if (Number % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}

int main()
{
    CheckResult(CounntDistinct(ReadString()));

    return 0;
}

