#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int number1 = 0, number2 = 1;
    if (N == 1) {
        cout << number1;
    }
    else if (N == 2) {
        cout << number1 << " " << number2;
    }
    else {
        cout << number1 << " " << number2 << " ";
        for (int i = 2; i < N; i++) {
            int sum = number1 + number2;
            cout << sum << " ";
            number1 = number2;
            number2 = sum;
        }
    }

    return 0;
}
