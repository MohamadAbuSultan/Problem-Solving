#include <iostream>
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
    a = ceil(a);
    b = ceil(b);
    cout << a << b << endl;
    return a == b;
}

int main()
{
    cout << approx_equals(-156.24037, -156.24038) << endl;
    cout << approx_equals(123.2345, 123.234501) << endl;
    cout << approx_equals(1456.3652, 1456.3641) << endl;
    cout << approx_equals(-1.234, -1.233999) << endl;
    cout << approx_equals(98.7655, 98.7654999) << endl;
    cout << approx_equals(-7.28495, -7.28596) << endl;
}
