
#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	int result = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[i - 1]) {
			nums[result] = nums[i];
			result += 1;
		}
	}
	return result;
}

int main()
{
	vector<int> nums = { 1, 1, 2 , 3 , 3, 4, 5, 6, 6};
	int k = removeDuplicates(nums);
	cout << "Output: " << k << ", nums = [";
	for (int i = 0; i < k; i++) {
		cout << nums[i];
		if (i < k - 1) {
			cout << ",";
		}
	}
	cout << ",_]" << endl;
	return 0;
}
