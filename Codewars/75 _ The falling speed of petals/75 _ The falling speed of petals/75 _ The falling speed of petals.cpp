
#include <iostream>

using namespace std;

double SakuraFall(double velocity) {
    return velocity <= 0 ? 0 : (5 * 80) / velocity;
}

int main()
{
    cout << SakuraFall(5);
}