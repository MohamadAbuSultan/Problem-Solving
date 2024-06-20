#include <iostream>

using namespace std;

int SumOfDigits(int number){
	int result = 0;

	while (number > 0)
	{
		result += number % 10;
		number = number / 10;
	}

	return result;
}

int main()
{
	int N, A, B, digitSum = 0, sum = 0;
	cin >> N >> A >> B;

	for (int i = 1; i <= N; i++)
	{
		digitSum = SumOfDigits(i);
		if (digitSum >= A && digitSum <= B) sum += i;
	}
	cout << sum;
}