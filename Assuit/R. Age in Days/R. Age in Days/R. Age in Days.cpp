#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    int years = number / 365;
    int remainingDays = number % 365;
    int months = remainingDays / 30;
    int days = remainingDays % 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}
