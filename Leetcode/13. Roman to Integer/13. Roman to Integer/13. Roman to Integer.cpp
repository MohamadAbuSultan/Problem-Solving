#include <iostream>
#include <map>

using namespace std;

int romanToInt(string s) {
    map<char, int> RomanNumbers;

    RomanNumbers['I'] = 1;
    RomanNumbers['V'] = 5;
    RomanNumbers['X'] = 10;
    RomanNumbers['L'] = 50;
    RomanNumbers['C'] = 100;
    RomanNumbers['D'] = 500;
    RomanNumbers['M'] = 1000;

    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && RomanNumbers[s[i]] < RomanNumbers[s[i + 1]]) {
            result -= RomanNumbers[s[i]];
        }
        else {
            result += RomanNumbers[s[i]];
        }
    }
    return result;
}


int main()
{
    string roman = "MCMXCIV";
    cout << "number: " << romanToInt(roman) << endl;
    return 0;
}