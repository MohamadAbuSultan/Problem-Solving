

#include <iostream>
#include <string>

std::string number_to_string(int num) {
    return std::to_string(num);
}

int main()
{
    std::cout << number_to_string(123);
}