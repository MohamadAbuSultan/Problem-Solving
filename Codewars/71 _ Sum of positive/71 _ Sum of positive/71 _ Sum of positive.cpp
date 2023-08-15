
#include <iostream>
#include <vector>

using namespace std;

int positive_sum(vector<int> arr) {
    int result = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            result += arr[i];
    }
    return result;
}

int main()
{
    cout << positive_sum({ 10, 20, 30, -60});
}