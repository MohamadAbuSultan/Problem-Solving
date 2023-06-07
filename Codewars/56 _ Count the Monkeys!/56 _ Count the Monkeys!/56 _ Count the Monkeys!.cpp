
#include <iostream>
#include <vector>

std::vector<int> MonkeyCount(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        result.push_back(i);
    }
    return result;
}

int main()
{
    std::cout << MonkeyCount(5);
}
