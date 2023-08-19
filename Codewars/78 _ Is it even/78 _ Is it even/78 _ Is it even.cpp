
#include <iostream>
#include <cmath>

using namespace std;

bool is_even(double n)
{
    return fmod(n, 2) == 0;
}

int main()
{
    cout << is_even(10);
    cout << is_even(-10);
    cout << is_even(0);
    cout << is_even(10.5);
}
