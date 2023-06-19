

#include <iostream>
#include <vector>

std::vector<int> countBy(int x, int n) {
    std::vector<int> vect;
    for (int i = 1; i <= n; i++) vect.push_back(i * x);
    return vect;
}

int main()
{
    countBy(10, 20);
}