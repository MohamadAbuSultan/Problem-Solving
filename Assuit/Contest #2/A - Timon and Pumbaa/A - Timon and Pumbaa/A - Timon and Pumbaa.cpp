#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "enter number1 and number2: ";

    cin >> number1 >> number2;

    cout << ((number1 - number2 >= 0) ? (number1 - number2) : 0) << endl;

    return 0;
}
