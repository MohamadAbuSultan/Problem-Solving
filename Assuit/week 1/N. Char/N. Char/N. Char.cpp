
#include <iostream>

using namespace std;

int main()
{
	char c;
	cin >> c;
    if (isalpha(c))
        if (islower(c)) cout << char(toupper(c)); 
        else cout << char(tolower(c));
    else cout << "Not a character";

}
