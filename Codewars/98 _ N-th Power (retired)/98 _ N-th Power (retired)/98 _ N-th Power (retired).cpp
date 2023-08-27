
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int index(const vector<int>& vector, int n) {
    
    // return n < vector.size() ? pow(vector[n], n) : -1;
     return n < vector.size() ? pow(vector.at(n), n) : -1;
    
    /*for (int i = 0; i < vector.size(); i++) {
        if (vector[i] == vector[n])
            return pow(vector[i], n);
    }
    return -1;*/
}

int main()
{
    cout << index({ 1,1,1,1,1,1,1,1,1,1 }, 9) << endl; // 1 ^ 9 = 1
    cout << index({ 1,1,1,1,1,1,1,1,1,2 }, 9) << endl; // 2 ^ 9 = 512
}