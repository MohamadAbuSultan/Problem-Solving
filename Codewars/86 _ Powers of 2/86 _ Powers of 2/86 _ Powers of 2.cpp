#include <vector>
#include <cstdint>
#include <cmath>
#include <iostream>

using namespace std;

vector<uint64_t> powers_of_two(int n) {
    vector<uint64_t> vec;
    for (int i = 0; i <= n; i++) {
        vec.push_back(pow(2, i));
    }
    return vec;
}


int main()
{
    vector<uint64_t> result = powers_of_two(5);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}

//vector<uint64_t> powers_of_two(int n) {
//    vector<uint64_t> v1;
//    long long int number;
//    for (int i = 0; i <= n; i++)
//    {
//        number = pow(2, i);
//        v1.push_back(number);
//    }
//    return v1;
//}