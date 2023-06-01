
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sumOfDifferences(vector<int> arr) {
    sort(arr.rbegin(), arr.rend());
    int diff = 0;

    if (arr.size() <= 1) {
        return 0;
    }
    else
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            diff += arr[i] - arr[i + 1];
        }
    }

    return diff;
}

int main()
{
    vector<int> v = { 1, 2, 10 };
    cout << sumOfDifferences(v);
}
