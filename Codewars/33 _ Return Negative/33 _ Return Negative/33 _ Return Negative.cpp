
#include <iostream>
using namespace std;

int makeNegative(int num)
{
    return num > 0 ? -num : num;
}

int main()
{
    cout << makeNegative(1) << endl;  // return -1
    cout << makeNegative(-5)<< endl; // return -5
    cout << makeNegative(0) << endl;  // return 0
}
