#include <iostream>
#include <string>

using namespace std;

string multi_table(int number)
{
	string result;
	for (int i = 1; i <= 10; i++)
	{
		result += to_string(i) + " * " + to_string(number) + " = " + to_string(i * number) + (i < 10 ? "\n" : "");
	}
	return result;
}

int main()
{
	cout << multi_table(5);
}
