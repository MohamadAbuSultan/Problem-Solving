#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    vector<int> result;
    int carry = 1; 

    for (int i = digits.size() - 1; i >= 0; i--) {
        int sum = digits[i] + carry; 

        if (sum > 9) {
            carry = 1;
            sum -= 10;
        }
        else {
            carry = 0; 
        }

        result.push_back(sum); 
    }

    if (carry == 1) {
        result.push_back(1);
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    vector<int> digits = { 7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6 };

    vector<int> result = plusOne(digits);

    cout << "Input: digits = [";
    for (int i = 0; i < digits.size(); ++i) {
        cout << digits[i];
        if (i < digits.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}