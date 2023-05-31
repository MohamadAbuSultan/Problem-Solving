
#include <iostream>
using namespace std;

bool lovefunc(int f1, int f2) {
    return f1 % 2 != f2 % 2;
    /*
    if (f1 % 2 == 0 && f2 % 2 != 0)
        return true;
    else if(f1 % 2 != 0 && f2 % 2 == 0)
        return true;
    return false;
    */
}
int main()
{
    cout << lovefunc(1, 2) << endl;
    cout << lovefunc(2, 2) << endl;
}
