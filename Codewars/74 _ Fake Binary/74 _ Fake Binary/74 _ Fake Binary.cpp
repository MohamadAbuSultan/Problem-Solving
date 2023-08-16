
#include <iostream>
#include <string>

using namespace std;

string fakeBin(string str) {
    for (int i = 0; i < str.length(); i++) 
        str[i] < '5' ? str[i] = '0' : str[i] = '1';
    return str;
    
    /*
    * حلول من الموقع
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = ((str[i] - '0') > 4) ? '1' : '0';
    }
    return str;
    for (auto& s : str)
    {
        s = s < '5' ? '0' : '1';
    }
    return str;
    */
}

int main()
{
    cout << fakeBin("5463728190");
}
