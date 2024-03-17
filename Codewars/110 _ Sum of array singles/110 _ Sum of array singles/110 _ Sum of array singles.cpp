#include <iostream>
#include <vector>

using namespace std;

int repeats(vector<int> v) {
    int result = 0;
    for (int num : v) {
        if (count(v.begin(), v.end(), num) == 1)
            result += num;
    }
    return result;
}

int Sum_of_array_singles(vector<int> v) {
    int sum = 0;
    bool found;
    for (int i = 0; i < v.size(); i++) {
        found = false;
        for (int j = 0; j < v.size(); j++) {
            if (i != j && v[i] == v[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            sum += v[i];
        }
    }
    return sum;
}

int RepeatsResult(vector<int> v) {
    int v1 = Sum_of_array_singles(v);
    return v1;
}

int main() {
    vector<int> arr = { 1, 2, 2, 3, 4, 4, 5 };
    cout << RepeatsResult(arr) << endl;
    cout << repeats(arr) << endl;
}
