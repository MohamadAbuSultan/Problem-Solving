#include <iostream>
#include <vector>

using namespace std;

vector<int> divisible_by(vector<int> numbers, int divisor) {
    vector<int> result;
    for (int i = 0; i < numbers.size(); i++) 
        if (numbers[i] % divisor == 0) 
            result.push_back(numbers[i]);
    return result;
}

int main() {
    vector<int> divisible = divisible_by({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, 2);
    for (auto i : divisible) 
        cout << i << endl;
    return 0;
}