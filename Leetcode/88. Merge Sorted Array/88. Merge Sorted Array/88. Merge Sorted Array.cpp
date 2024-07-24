#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	for (int i = 0; i < n; i++)
		nums1[m + i] = nums2[i];
	sort(nums1.begin(), nums1.end());
}

int main()
{
	vector<int> nums1 = { 1,2,3,0,0,0 };
	vector<int> nums2 = { 2,5,6 };
	int n = 3, m = 3;
	merge(nums1, m, nums2, n);

	cout << "Merged array: ";
	for (int num : nums1) {
		cout << num << " ";
	}
	cout << endl;
}