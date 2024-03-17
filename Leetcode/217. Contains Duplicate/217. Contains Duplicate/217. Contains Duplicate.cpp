
#include <iostream>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>&nums) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
        return false;
}

int main()
{
    vector<int> vect{ 10, 20, 30 };
    cout << containsDuplicate(vect);
    vector<int> vect2{ 10, 20, 30, 20 };
    cout << containsDuplicate(vect2);
}