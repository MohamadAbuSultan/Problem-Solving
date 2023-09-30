
#include <iostream>

using namespace std;

int main()
{
	/*48 57
		65 90 
		97 122*/
	char c;
	cin >> c;
    if (c >= '0' && c <= '9') cout << "IS DIGIT";
    else if (c >= 'A' && c <= 'Z') cout << "ALPHA" << endl << "IS CAPITAL";
    else if (c >= 'a' && c <= 'z') cout << "ALPHA" << endl << "IS SMALL";
    else cout << "Not a valid character";

    return 0;
}