
#include <iostream>
#include <string>

using namespace std;

int string_to_number(const std::string& s) {
	return stoi(s);
}

int main()
{
	cout << string_to_number("12354");
}