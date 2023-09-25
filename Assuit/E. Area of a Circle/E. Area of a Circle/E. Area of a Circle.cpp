#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    double r;
    cin >> r;
    double area = 3.141592653 * pow(r, 2);
    cout << area;
}