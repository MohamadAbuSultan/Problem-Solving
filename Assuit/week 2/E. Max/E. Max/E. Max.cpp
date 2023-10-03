#include <iostream>
#include <vector>

using namespace std;

vector<int> InputNumbers(int number) {
    vector<int> result;
    for (int i = 0; i < number; i++) {
        int num;
        cin >> num;
        result.push_back(num);
    }
    return result;
}

int PrintResult(vector<int> result) {
    int max = result[0];
    for (int i = 0; i < result.size(); i++) {
        if (result[i] > max) max = result[i];
    }
    return max;
}

int main() {
    int number;
    cin >> number;
    vector<int> result = InputNumbers(number);
    cout << PrintResult(result);
    return 0;
}
