

#include <iostream>
 
using namespace std;

int simpleMultiplication(int a) {
	return a % 2 == 0 ? a * 8 : a * 9;
}

int main()
{
	cout << simpleMultiplication(10) << endl;
	cout << simpleMultiplication(9);
}
