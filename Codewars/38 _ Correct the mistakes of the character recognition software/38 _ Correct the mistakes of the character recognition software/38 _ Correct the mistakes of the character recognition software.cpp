#include <iostream>
#include <string>
using namespace std;

string correct(string str) {
    replace(str.begin(), str.end(), '5', 'S');
    replace(str.begin(), str.end(), '0', 'O');
    replace(str.begin(), str.end(), '1', 'I');
    return str;

}

int main()
{
    cout << correct("1F-RUDYARD K1PL1NG");
}