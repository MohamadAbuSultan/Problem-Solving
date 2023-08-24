#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> flip(const char dir, const vector<int>& arr) {
    vector<int> result = arr;
    if (dir == 'R')
        sort(result.begin(), result.end());
    else {
        sort(result.begin(), result.end());
        reverse(result.begin(), result.end());
    }
    return result;
}

int main()
{
    vector<int> arr = { 3, 1, 4, 2 };
    char dir = 'R';
    vector<int> flipped_arr = flip(dir, arr);
    for (int i = 0; i < flipped_arr.size(); i++) {
        cout << flipped_arr[i] << " ";
    }

    cout << endl;

    dir = 'L';
    vector<int> flipped2 = flip(dir, arr);
    for (int i = 0; i < flipped2.size(); i++) {
        cout << flipped2[i] << " ";
    }
}