
#include <iostream>
#include <string>

using namespace std;

int get_age(const string& she_said) {
	int n = stoi(she_said); 
	// = return she_said - '0';
	return n;
}

int main()
{
	cout << get_age("5 years old");
}
