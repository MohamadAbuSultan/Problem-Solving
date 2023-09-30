#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    double number1, number2;
    cin >> number1 >> number2;
    
    double number3 = number2 / (1 - (number1 / 100));

    cout << fixed << setprecision(2) << number3 << endl;
}
