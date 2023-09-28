#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int n1 = A % 100;
    int n2 = B % 100;
    int n3 = C % 100;
    int n4 = D % 100;

    cout << setw(2) << setfill('0') << (n1 * n2 * n3 * n4) % 100;
    return 0;
}
