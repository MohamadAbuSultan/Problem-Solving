
#include <iostream>
#include <cmath>

using namespace std;

bool PythagoreanTriple(const int a, const int b, const int c)
{
    return
        pow(a, 2) + pow(b, 2) == pow(c, 2) ||
        pow(a, 2) + pow(c, 2) == pow(b, 2) ||
        pow(c, 2) + pow(b, 2) == pow(a, 2);
}

int main()
{
    cout << PythagoreanTriple(3, 4, 5);
}
