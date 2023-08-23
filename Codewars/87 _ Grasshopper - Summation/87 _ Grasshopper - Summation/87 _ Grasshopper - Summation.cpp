
#include <iostream>

using namespace std;

int summation(int num) {
    return (num * (num + 1)) / 2; // arithmetic series formula

    //int result = 0;
    //for (int i = 1; i <= num; i++) {
    //    result += i;
    //}
    //return result;
}

int main()
{
    cout << summation(8);
}
