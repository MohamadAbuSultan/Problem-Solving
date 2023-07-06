

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findSmallest(vector <int> list)
{
    sort(list.begin(), list.end());
    return list[0];
    // return list.at(0); حل آخر
}
int main()
{
    cout << findSmallest({ 3,5,2 });
}

