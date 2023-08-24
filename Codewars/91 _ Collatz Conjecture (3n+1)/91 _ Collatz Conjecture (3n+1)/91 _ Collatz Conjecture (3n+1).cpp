
#include <iostream>

using namespace std;

unsigned int hotpo(unsigned int n) {
    int result = 0;
    while (n != 1)
    {
        if (n % 2 == 0) { n = n / 2; }
        else if (n % 2 == 1) { n = 3 * n + 1; }
        result++;
    }
    return result;
}

int main()
{
    cout << hotpo(5);
    cout << hotpo(10);
}