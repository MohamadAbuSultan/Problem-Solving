#include <iostream>
#include <vector>

using namespace std;

int ReadPositiveNumber() {
    int number;
    do {
        cin >> number;
    } while (number <= 0);
    return number;
}

vector<int> PrintPrimes1ToN(int number) {
    vector<int> result;
    bool isPrime;
    for (int i = 2; i <= number; i++) {
        isPrime = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int number = ReadPositiveNumber();
    vector<int> numbers = PrintPrimes1ToN(number);

    for (int prime : numbers) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
