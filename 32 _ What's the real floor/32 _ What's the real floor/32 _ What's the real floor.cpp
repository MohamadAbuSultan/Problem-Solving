

#include <iostream>
using namespace std;

int getRealFloor(int f) {
    if (f <= 0)
        return f;
    else if (f > 0 && f < 13)
        return f - 1;
    return f - 2;
}

int main()
{
    cout << getRealFloor(1) << endl;
    cout << getRealFloor(5) << endl;
    cout << getRealFloor(15) << endl;
} 
