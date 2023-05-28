#include <iostream>
#include <vector>
using namespace std;
int grow(vector<int> nums) {
    int number = 1;
    for (int i = 0; i < nums.size(); i++)
        number = number * nums[i];
    return number;
}
int main()
{
    cout << grow({1,2,3,4});
}