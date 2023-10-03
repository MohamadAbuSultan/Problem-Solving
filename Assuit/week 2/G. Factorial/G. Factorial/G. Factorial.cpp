#include <iostream>

using namespace std;

int main() {
	int number, number2;
	long long result = 1;
    cin >> number;
	while (number--)
	{
		result = 1;
		cin >> number2;
		for (int i = 1; i <= number2; i++)
		{
			result *= i;
		}
		cout << result << endl;
	}
}


//#include <iostream>
//
//using namespace std;
//
//int ReadPositiveNumber() {
//    int number;
//    do {
//        cin >> number;
//    } while (number <= 0);
//    return number;
//}
//
//int FactorialNumber(int number) {
//    int result = 1;
//    for (int i = number; i > 1; i--) {
//        result *= i;
//    }
//    return result;
//}
//
//void PrintFactorial(int number) {
//    for (int i = 0; i < number; i++) {
//        int N = ReadPositiveNumber();
//        cout << FactorialNumber(N) << endl;
//    }
//}
//
//int main() {
//    int number = ReadPositiveNumber();
//    PrintFactorial(number);
//}