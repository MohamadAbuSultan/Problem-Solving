#include <iostream>
#include <vector>

using namespace std;

int main() {
    int number;
    cin >> number;
    vector<int> v1;
    for (int i = 0; i < number; i++) {
        long long N;
        cin >> N;

        while (N > 0) {
            int digit = N % 10;
            cout << digit;
            N /= 10;
            if (N > 0) {
                cout << " ";
            }
            v1.push_back(digit);
        }
        cout << endl;
    }

    return 0;
}
