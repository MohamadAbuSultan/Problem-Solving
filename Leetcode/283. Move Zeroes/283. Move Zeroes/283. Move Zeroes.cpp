#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int lastNonZeroFoundAt = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[lastNonZeroFoundAt], nums[i]);
            lastNonZeroFoundAt++;
        }
    }

    for (int num : nums) {
        cout << num << " ";
    }
}

int main() {
    vector<int> nums = { 0, 1, 0, 2, 3, 4, 5, 0, 5, 0 , 6 , 5 };
    moveZeroes(nums);
    return 0;
}
