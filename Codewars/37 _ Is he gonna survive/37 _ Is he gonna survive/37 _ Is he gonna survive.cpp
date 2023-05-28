

#include <iostream>
using namespace std;

bool hero(int bullets, int dragons) {
    return dragons * 2 <= bullets ? true : false;
}

int main()
{
    cout << hero(7, 4);
    cout << hero(10, 4);
    cout << hero(100, 50);
}