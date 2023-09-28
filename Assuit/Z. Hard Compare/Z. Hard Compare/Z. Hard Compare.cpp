#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    double res1 = B * log(A);
    double res2 = D * log(C);
    if (res1 > res2) cout << "YES";
    else cout << "NO";
}