#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> v1(size); 
    int evenNum = 0, oddNum = 0, posNum = 0, negNum = 0;

    for (int i = 0; i < size; i++) {
        cin >> v1[i]; 

        if (v1[i] % 2 == 0) evenNum++;
        else oddNum++;

        if (v1[i] > 0) posNum++;
        else if (v1[i] < 0) negNum++;
    }

    cout << "Even: " << evenNum << endl;
    cout << "Odd: " << oddNum << endl;
    cout << "Positive: " << posNum << endl;
    cout << "Negative: " << negNum << endl;

    return 0;
}
