#include <iostream>
#include <cmath>
using namespace std;

bool approx_equals(double a, double b) {
    return !(round(a) == round(b));
}

int main()
{
    cout << approx_equals((0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 ), 1.0);
}
