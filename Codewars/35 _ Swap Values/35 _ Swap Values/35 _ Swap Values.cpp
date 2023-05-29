

#include <iostream>
#include <utility>
using namespace std;

std::pair<int, int> swap_values(std::pair<int, int> values) {
    std::swap(values.first, values.second);
    return values;

    /*int temp = values.first;
    values.first = values.second;
    values.second = temp;
    return values;*/
}
int main()
{
    swap_values(pair<int, int>{1, 2});
}
