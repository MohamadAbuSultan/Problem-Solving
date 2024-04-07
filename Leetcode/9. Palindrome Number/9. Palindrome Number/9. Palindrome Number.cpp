
#include <iostream>
#include <string>

using namespace std;

string ReversedString(int number) {
	string number1 = to_string(number);
	string result;
	for (int i = number1.length()-1; i >= 0; i--)
	{
		result += number1[i];
	}
	return result;
}

bool isPalindrome(int x) {
	string number = to_string(x);
	string result = ReversedString(x);
	if (number == result) return true;
	return false;
}

// from leetcode 
// Approach 1: Reversing the Entire Number
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0) {
			return false;
		}

		long long reversed = 0;
		long long temp = x;

		while (temp != 0) {
			int digit = temp % 10;
			reversed = reversed * 10 + digit;
			temp /= 10;
		}

		return (reversed == x);
	}
};

// Approach 2: Reversing Half of the Number
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0 || (x != 0 && x % 10 == 0)) {
			return false;
		}

		int reversed = 0;
		while (x > reversed) {
			reversed = reversed * 10 + x % 10;
			x /= 10;
		}
		return (x == reversed) || (x == reversed / 10);
	}
};

int main()
{
	cout << isPalindrome(-121) << endl;
	cout << isPalindrome(121) << endl;
	cout << isPalindrome(-120) << endl;
}
