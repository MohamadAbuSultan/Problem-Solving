
#include <iostream>

using namespace std;

string boolean_to_string(bool b) {
	return b ? "true" : "false";
}

int main()
{
	cout << boolean_to_string(true) << endl;
	cout << boolean_to_string(false);
}