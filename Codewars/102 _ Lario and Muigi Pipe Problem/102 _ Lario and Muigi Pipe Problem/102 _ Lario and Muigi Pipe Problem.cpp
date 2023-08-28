
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> pipe_fix(const vector<int>& nums) {
    if (nums.empty()) {
        return vector<int>();
    }

    int min_val = *min_element(nums.begin(), nums.end());
    int max_val = *max_element(nums.begin(), nums.end());

    vector<int> result;

    for (int i = min_val; i <= max_val; i++) {
        result.push_back(i);
    }

    return result;
}

int main()
{
    vector<int> v1 = pipe_fix({ 1,5,9,15 });
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    return 0;
}