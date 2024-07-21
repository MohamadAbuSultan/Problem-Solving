#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int result = 0;

    sort(nums.begin(), nums.end());

    vector<int> nums2;

    for (int i = nums.begin(); i < nums.end(); i++)
    {
        nums2.push_back(i);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] ^ nums2[i];
    }

    return 0;
}

//int missingNumber(vector<int>& nums) {
//    int n = nums.size();
//    int result = 0;
//    for (int i = 1; i <= n; i++) {
//        result = result ^ i;
//    }
//    for (int i = 0; i < nums.size(); i++) {
//        result = result ^ nums[i];
//    }
//    return result;
//}

//int missingNumber(vector<int>& nums) {
//    int n = nums.size();
//
//    sort(nums.begin(), nums.end());
//
//    if (nums[0] != 0) return 0;
//    if (nums[n - 1] != n) return n;
//
//    for (int i = 1; i < nums.size(); i++)
//        if (nums[i] != i)
//            return i;
//
//    return 0;
//}

//int missingNumber(vector<int>& nums) {
//    int res = nums.size();
//    for (int i = 0; i < nums.size(); ++i) {
//        res += (i - nums[i]);
//    }
//    return res;
//}

//int missingNumber(vector<int>& nums) {
//    int n = nums.size();
//    vector<int>v (n + 1, -1);
//    for (int i = 0; i < nums.size(); i++) {
//        v[nums[i]] = nums[i];
//    }
//    for (int i = 0; i < v.size(); i++) {
//        if (v[i] == -1) return i;
//    }
//    return 0;
//}

int main()
{
    vector<int> nums = { 0,1,2,3,4,5,7,8 };
    cout << missingNumber(nums) << endl;
    nums = { 0,2 }; 
    cout << missingNumber(nums) << endl;
}