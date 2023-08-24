#include <iostream>
#include <array>
#include <string>

using namespace std;

array<string, 3> fixTheMeerkat(array<string, 3> arr) {
	return reverse(arr.begin(), arr.end()), arr;
}

int main()
{
	/*array<string, 3>*/ auto result = fixTheMeerkat({"tail", "body", "head"});
	for (const auto& element : result) {
		cout << element << " ";
	}
}