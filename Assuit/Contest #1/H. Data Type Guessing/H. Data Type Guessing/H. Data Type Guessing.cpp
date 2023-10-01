#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    float result = static_cast<float>(n) * static_cast<float>(k) / static_cast<float>(a);
    long long intpart = static_cast<long long>(result);
    float decpart = result - intpart;
    if (decpart == 0.0f) {
        if (intpart > INT_MAX) {
            cout << "long long";
        }
        else {
            cout << "int";
        }
    }
    else {
        cout << "double";
    }
    return 0;
}
