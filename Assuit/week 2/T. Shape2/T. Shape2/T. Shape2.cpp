#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i * 2 - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
