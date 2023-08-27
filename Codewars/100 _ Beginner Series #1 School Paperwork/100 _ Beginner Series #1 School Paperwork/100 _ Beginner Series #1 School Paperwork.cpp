
#include <iostream>

using namespace std;

int paperwork(int n, int m) {
    return n < 0 || m < 0 ? 0 : n * m;
    // return n < 0 ? 0 : m < 0 ? 0 : m * n;
}

int main()
{
    cout << paperwork(0, 5) << endl;
    cout << paperwork(5, 0) << endl;
    cout << paperwork(5, 5) << endl;
}