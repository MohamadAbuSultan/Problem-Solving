
#include <iostream>

using namespace std;

bool checkForFactor(int base, int factor) {
    return base % factor == 0;
}
int main()
{
    cout << checkForFactor(10, 2);
    cout << checkForFactor(9, 2);
}