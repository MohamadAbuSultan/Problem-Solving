
#include <iostream>
#include <vector>

using namespace std;

vector<int> invert(vector<int> values)
{
    for (int i = 0; i < values.size(); i++)
        values[i] *= -1;
    return values;
}

int main()
{
    /*vector<int> A = { 10, 20, 30,
                      40, 50, 60 };
    cout << invert(A);*/
}