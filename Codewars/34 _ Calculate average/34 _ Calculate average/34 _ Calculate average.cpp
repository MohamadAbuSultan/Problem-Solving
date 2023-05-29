
#include <iostream>
#include <vector>

using namespace std;

double calcAverage(const vector<int>& values) {
    double sum = 0;
    for (int i = 0; i < values.size(); i++)
    {
        sum += values[i];
    }
    return sum / values.size();
}

int main()
{
    cout << calcAverage({ 2,5 }) << endl;
    cout << calcAverage({ 3,4,2,4,5 }) << endl;
}
