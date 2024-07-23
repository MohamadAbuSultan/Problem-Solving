#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int Number = nums.size();
    for (int i = 0; i < Number - 1; i++) {
        for (int j = i + 1; j < Number; j++) {
            if (nums[i] + nums[j] == target) {
                return { i, j };
            }
        }
    }
    return {};
}

int main()
{
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 22;
    vector<int> v1_twoSum = twoSum(nums, target);
    cout << v1_twoSum[0] << ", " << v1_twoSum[1] << endl;
}